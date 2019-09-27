#include<iostream>
#include<conio.h>
using namespace std;
class Line
 {
	 float length;
 public:
	 
	 void setlength(float);
	 void getlength(void);
};
void Line::setlength(float a)
{
	length=a;
}
void Line::getlength(void)
{
	cout<<"length of line = "<<length<<endl;
}
void main()
{
	Line line;
	line.setlength(6.0);
	line.getlength();
	//line.length=10.0;
	line.setlength(10.0);
	line.getlength();
	getch();
}
