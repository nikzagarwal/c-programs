#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *,int *);
void main()
{
	int a,b,*p1,*p2;
	cout<<"Enter two elements"<<endl;
	cin>>a>>b;
	cout<<"old a = "<<a;
	cout<<"\nold b = "<<b;
	p1=&a;
	p2=&b;
	swap(p1,p2);
	cout<<"\nnew a = "<<a;
	cout<<"\nnew b = "<<b;
	getch();
}
void swap(int *p1, int *p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	
}
	
	
