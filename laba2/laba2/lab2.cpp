#include<iostream>
#include<conio.h>
using namespace std;
int f(int a)
{
	if (a==0 ||a==1)
		return 1;
	else 
	   return f(a-1)+f(a-2);
}
void main()
{
	int c=f(5);
	cout<<c;
	system("pause");
}