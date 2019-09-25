//max using inline
#include<iostream>
#include<conio.h>
using namespace std;

inline int max(int a, int b)
{
	if(a>b)
		return a;
	return b;
}
void main()
{
	int a,b;
	cout<<"Enter two elements"<<endl;
	cin>>a>>b;
	int res=max(a,b);
	cout<<"Maximum no. = "<<res;
	getch();
}
