#include<iostream>
using namespace std;
class item
{
	static int count;
	int number;
public:

	void getdata(int a)
	{
		number =a;
		count++;
	}
	void getcount()
	{
		cout<<"count="<<count<<endl;
	}
};
int item::count;
int main()
{
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	a.getdata(100);
	a.getdata(200);
	a.getdata(300);
	a.getcount();
	b.getcount();
	c.getcount();
    return 0;

}
