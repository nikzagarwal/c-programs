//deriving publicly
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class A
{
	int a;
public:
	int b;
	void get_ab(int x,int y)
	{
		a=x;
		b=y;
	}
	int show_a(void)
	{
		return a;
	}
};
 class mul :private A
 {
 public:
		 int multiply;
		void get(int x,int y)
		{
			get_ab(x,y);
		}
	 int multi()
	 {
		multiply=show_a()*b;
		return multiply;
	 }
 };

 int main()
 {
	 mul ob;
	 ob.get(10,20);
	 cout<<ob.multi();
	 getch();
	 return 0;
 }
