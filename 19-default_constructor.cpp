#include<iostream>
using namespace std;
class counter
{
	int count;
public:
	counter()
	{
		count=0;
	}
	void getcount()
	{
		cout<<count<<endl;
	}
	void inccount()
	{
		count++;
	}
};
void main()
{
	counter c1,c2;
	c1.getcount();
	c2.getcount();
	c1.inccount();
	c2.inccount();
	c1.getcount();
	c2.getcount();
	//getch();
}