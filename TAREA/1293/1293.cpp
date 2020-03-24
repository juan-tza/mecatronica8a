#include<iostream>

using namespace std;
int main()
{
	double n, r=1, i;

cin>>n;
if(n>=0&&n<=265)
{
	for(i=0;i<n;i++)
	r=r*2;
cout<<r<<endl;
return 0;
}
else{
	return 1;}
}
