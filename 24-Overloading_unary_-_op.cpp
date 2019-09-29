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
	void operator-()
	{
		x=-x;
		y=-y;
		z=-z;
	}
};
int main()
{
	space s;
	s.getdata(10,-20,30);
	s.display();
	-s;
	cout<<"new s:"<<endl;
	s.display();
	return 0;
	getch();
}