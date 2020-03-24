#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	srand(time(NULL));

	int rd = 0;
	int rdc = 0;
	int v;
	int t=0;
	int lim_inf = 50;
	int lim_sup = 150;

	for(int i=0;i<2000;i++)
	{
	    v= lim_inf + rand()%(lim_sup + 1 - lim_inf);

	    if (v<=100)
	   { rd= rd + 1;
	   } 
	    if (v>100)
	   {  rdc= rdc + 1;
	   }
/*	cout<<v<<endl;
	cout<<rd<<endl;
	cout<<rdc<<endl;
*/
	}

	t = (( rd * 19 *10 ) + ( rdc * 12 *19 ));
	cout<<"El costo total es: "<<t<<endl;

	return 0;
}
