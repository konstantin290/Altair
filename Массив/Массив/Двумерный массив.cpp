#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float a[3][3];
	int n;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
	
			cin>>a[i][j];
	
	 for(int i=0;i<3;i++)
	 {
		 cout<<endl;
		 for(int j=0;j<3;j++)
			 
			 cout<<a[i][j];
		
	 }
	 for(int i=0;i<3;i++)
	 {
		 n=0;
			 for(int j=0;j<3;j++)
                 n=n+a[i][j];
		 cout<<" ";
		 cout<<n;
	 }
	 system("pause");

}