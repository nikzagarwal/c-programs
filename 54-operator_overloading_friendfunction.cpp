#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class space
{
	int x,y,z;
public:
	void getdata(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display(void)
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
	}
	friend space operator-(space);
};
space operator-(space o)
	{
		space n;
		n.x=-o.x;
		n.y=-o.y;
		n.z=-o.z;
		return n;
	}
int main()
{
	space s,n;
	s.getdata(10,-20,30);
	s.display();
	n=-s;
	cout<<"new s:"<<endl;
	n.display();
	return 0;
	getch();
}
