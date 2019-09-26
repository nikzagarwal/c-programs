#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct student
 {
	 string name;
	 int roll;
	 int marks;
 };

void main()
{
	student a={"nikhil",1,99};
	cout<<"name = "<<a.name<<endl;
	cout<<"roll = "<<a.roll<<endl;
	cout<<"marks = "<<a.marks<<endl;
	getch();
}
