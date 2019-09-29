#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class test
{
	int count;
public:
	test():count(5){}
	void display(void)
	{
		cout<<"count="<<count<<endl;
	}
	void operator++()
	{
		count+=1;
	}
};
int main()
{
	test t;
	++t;
	t.display();
	return 0;
	getch();
}