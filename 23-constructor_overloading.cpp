#include<iostream>
using namespace std;
class shape
{
	
public:
	int ar;
	shape(int x)
	{
		ar=x*x;
	}
	shape(int l,int b)
	{
		ar=l*b;
	}
	shape(float r)//it will fetch error because in constructor overloading it only sees no. of objects
	{
		ar=3.14*r*r;
	}

};
void main()
{
	shape a(5);
	shape b(5,7);
	shape c(5.2,2);
	cout<<a.ar<<endl;
	cout<<b.ar<<endl;
	cout<<c.ar<<endl;
}