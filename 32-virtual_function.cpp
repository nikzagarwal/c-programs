//deriving publicly
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class B
{
public:
	void display()
	{
		cout<<"base display\n";
	}
	virtual void show()
	{
		cout<<"base show\n";
	}
};
 class D :public B
 {
public:
	void display()
	{
		cout<<"derived display\n";
	}
	void show()
	{
		cout<<"derived show\n";
	}
 };

 int main()
 {
	 B b;
	 D d;
	 B *bptr;
	 bptr=&b;
	 bptr->display();
	 bptr->show();
	 bptr=&d;
	 bptr->display();
	 bptr->show();
	 getch();
	 return 0;
 }