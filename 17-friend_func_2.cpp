#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
public:
	int a;
	void setvalue(int i)
	{
		a=i;
	}
	friend void swap(int &,int &);
};
class B
{
	
public:
	int b;
	void setvalue(int i)
	{
		b=i;
	}
	friend void swap(int &,int &);
};

void swap(A &x,B &y)
{
	int temp=x.a;
	x.a=y.b;
	y.b=temp;
	cout<<"a= "<<x.a<<endl;
	cout<<"b= "<<y.b<<endl;
}


void main()
{
	A a;
	B b;
	a.setvalue(10);
	b.setvalue(20);
	swap(a,b);
	cout<<"a= "<<a.a<<endl;
	cout<<"b= "<<b.b<<endl;
	getch();
}
