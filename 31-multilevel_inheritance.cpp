//deriving publicly
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class B;
class mul;
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

class B:public A
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
	int sum()
	{
		return show_a()+b;
	}
};

 class mul:public B
 {
 public:
		 int multiply;
	 int multi()
	 {
		multiply=sum()*sum();
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