//factorial using inline function
#include<iostream>
#include<conio.h>
using namespace std;
 int fact(int);
void main()
{
	int a;
	cout<<"Enter a element"<<endl;
	cin>>a;
	int res=fact(a);
	cout<<"factorial of no. = "<<res;
	getch();
}
inline int fact(int n)
{
	if(n==1)
		return 1;
	return n*fact(n-1);
}