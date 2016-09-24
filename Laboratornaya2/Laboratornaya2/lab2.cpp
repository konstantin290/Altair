#include<iostream>
#include<conio.h>
using namespace std;
int f(int a)
{
	if (a==1)
		return 1;
	else 
	   return f(a-1)*a;
}
void main()
{
	int c=f(5);
	cout<<c;
	system("pause");
}