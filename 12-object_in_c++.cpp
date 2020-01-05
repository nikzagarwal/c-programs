#include<iostream>
#include<conio.h>
using namespace std;
class item
 {
	int number;
	float cost;//private by default
 public:
	 void getdata(int,float);
	 void putdata();
};
void item::getdata(int a,float b)
{
	number =a;
	cost=b;
}
void item::putdata(void)
{
	cout<<"number = "<<number<<endl;
	cout<<"cost = "<<cost<<"\n";
}
int main()
{
	item x,y;
	cout<<"object x"<<endl;
	x.getdata(100,299.56);
	x.putdata();
	cout<<"object y"<<endl;
	y.getdata(10,29.6);
	y.putdata();
	getch();
	return 0;
}
