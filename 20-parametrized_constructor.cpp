#include<iostream>
using namespace std;
class cube
{
	
public:
	int side;
	cube(int x)
	{
		side=x;
	}
};
void main()
{
	cube c1(10),c2(20),c3(30);
	cout<<c1.side<<","<<c2.side<<","<<c3.side<<endl;
}