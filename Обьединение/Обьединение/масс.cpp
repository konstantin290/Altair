#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float a[4],b[4],c[7],z[4];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>z[i];
	}
	for (int i=0;i<n+n+n;i++)
	{
		if (i%3==0)
		{
			c[i]=a[i/3];
		}
		if(i%3==1)
		{
			c[i]=b[i/3];
		}
		
		if(i%3==2)
		{
			c[i]=z[i/3];
		}
	}
	for(int i=0;i<n+n+n;i++)
	{
		cout<<c[i];
	}
	system("pause");
}