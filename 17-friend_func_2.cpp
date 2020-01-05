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
	friend void swap(A &,B &);
};
class B
{

public:
	int b;
	void setvalue(int i)
	{
		b=i;
	}
	friend void swap(A &,B &);
};

void swap(A &x,B &y)
{
	int temp=x.a;
	x.a=y.b;
	y.b=temp;

}


int main()
{
	A a;
	B b;
	a.setvalue(10);
	b.setvalue(20);
	cout<<"a= "<<a.a<<endl;
	cout<<"b= "<<b.b<<endl;
	swap(a,b);
	cout<<"a= "<<a.a<<endl;
	cout<<"b= "<<b.b<<endl;
	getch();
	return 0 ;
}
