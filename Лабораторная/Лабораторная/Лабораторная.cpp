#include<iostream>
#include<conio.h>
using namespace std;
int sum (int a,int b)
{
	int c=a+b;
	return c;
}
int minus(int a, int b)
{
	int c=a-b;
	return c;
}

int mult(int a, int b)
{
	int i,s=0;
		for(int i=0;i<b;i++)
	{
		s=sum(s,a);
	}
	return s;
}
int del (int a, int b)
{
	int c=0;
    while(a>0)
{
	a=a-b;
	c++;
}
return c;
}

void main ()
{
	int c,a,b,z,n,v;
	cin>>a>>b;
    c=sum(a, b);
	cout<<"sum-"<<c;
	z=minus(a,b);
	cout<<" ";
	cout<<"minus-"<<z;
	n=mult(a,b);
	cout<<" ";
	cout<<"mult-"<<n;
    v=del(a,b);
	cout<<" ";
	cout<<"del-"<<v;
	system("pause");

}