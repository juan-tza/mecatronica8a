#include<iostream>

using namespace std;

int ope(int a,int b)
{
long s,r,m,mod,d;
	s=a+b;
	r=a-b;
	m=a*b;
	d=a/b;
	mod=a%b;
cout<<s<<endl;
cout<<r<<endl;
cout<<m<<endl;
cout<<d<<endl;
cout<<mod<<endl;
return 0;
}
int main()
{
int a, b;
cin>>a;
cin>>b;
if(a>=1&&b<=50)
ope(a,b);
return 0;
}
