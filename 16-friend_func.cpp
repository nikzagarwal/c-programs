#include<iostream>
#include<conio.h>
using namespace std;
class abc;
class xyz
{
	int x;
public:
	void setvalue(int i)
	{
		x=i;
	}
	friend void max(xyz,abc);
};
class abc
{
	int a;
	public:
		void setvalue(int i)
		{
			a=i;
		}
		friend void max(xyz,abc);
};

void max(xyz m,abc n)
{
	if(m.x>n.a)
		cout<<m.x;
	else
		cout<<n.a;
}
void main()
{
	abc ab;
	ab.setvalue(10);
	xyz xy;
	xy.setvalue(20);
	max(xy,ab);
	getch();
}
