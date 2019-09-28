#include<iostream>
using namespace std;
class test
{
	static int count;
	int code;
public:
	
	void setcode(void)
	{
		code=++count;
	}
	void showcode(void)
	{
		cout<<"code="<<code<<endl;
	}	
	static void showcount(void)
	{
		cout<<"count="<<count<<endl;
	}
};
int test::count;
void main()
{
	test a,b;
	a.setcode();
	b.setcode();
	test::showcount();
	test c;
	c.setcode();
	test::showcount();
	a.showcode();
	b.showcode();
	c.showcode();



}