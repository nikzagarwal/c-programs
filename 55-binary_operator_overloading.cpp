#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class add
{
	int x;
public:
	void getdata(int a)
	{
		x=a;
    }
	void display(void)
	{
		cout<<"x="<<x<<endl;
	}
	add operator+(add X)
	{
		add S;
		S.x=x+X.x;
		return S;
	}
};
int main()
{
	add A,B,C;
	A.getdata(10);
	B.getdata(20);
	A.display();
	B.display();
	C=A+B;
	cout<<"Sum:"<<endl;
	C.display();
	return 0;
	getch();
}
