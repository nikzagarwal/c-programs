//deriving publicly
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class B;
class A
{
	int a;
public:
	void get_a(int x)
	{
		a=x;
	}
	int show_a(void)
	{
		return a;
	}
};
class B
{
	int b;
public:
	void get_b(int x)
	{
		b=x;
	}
	int show_b(void)
	{
		return b;
	}
};


 class mul :public A,public B
 {
 public:
		 int multiply;
	 int multi()
	 {
		multiply=show_a()*show_b();
		return multiply;
	 }
 };

 int main()
 {
	 mul ob;
	 ob.get_a(10);
	 ob.get_b(20);
	 cout<<ob.multi();
	 getch();
	 return 0;
 }