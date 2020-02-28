#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
	int lim_inf=1, lim_sup=200; 
	int sp=0;
	int si=0;

	if (argc !=3)
	{
	   cout<<"Error, debe de ingresar dos parametros"<<endl;
	   return 1;
	}
	
	lim_inf = stoi(argv[1], nullptr,10);
	lim_sup = stoi(argv[2], nullptr,10);

	for(int i=lim_inf;i<lim_sup;i++)
	{
	   if(i%2==0)
	         sp = sp + i;
	   else 
		 si = si + i;
	}
	
	cout<<"La suma de los numeros pares es: "<<sp<<endl;
	cout<<"La suma de los numeros impares es: "<<si<<endl;

	return 0;
}
