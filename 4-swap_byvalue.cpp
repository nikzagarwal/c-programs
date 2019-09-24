#include<iostream>
#include<conio.h>
using namespace std;
void swap(int,int);
void main()
{
	int a,b;
	cout<<"Enter two elements"<<endl;
	cin>>a>>b;
	cout<<"old a = "<<a;
	cout<<"\nold b = "<<b;
	swap(a,b);
	getch();
}
void swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nnew a = "<<a;
	cout<<"\nnew b = "<<b;
}
	
	
