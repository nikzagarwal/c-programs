#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class test2
{
	int count;
public:
	test2():count(5){}
	void display(void)
	{
		cout<<"count="<<count<<endl;
	}
	test2 operator++()
	{
		test2 temp;
		++count;
		temp.count=count;
		return temp;
	}
};
int main()
{
	test2 t,t2;
	t.display();
	t2.display();
	t2=++t;
	cout<<"new values:"<<endl;
	t.display();
	t2.display();
	return 0;
	getch();
}