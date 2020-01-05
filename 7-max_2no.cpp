#include<iostream>
#include<conio.h>
using namespace std;
int max(int,int);
int main()
{
	int a,b;
	cout<<"Enter two elements"<<endl;
	cin>>a>>b;
	int res=max(a,b);
	cout<<"Maximum no. = "<<res;
	getch();
    return 0;
}
int max(int a, int b)
{
	if(a>b)
		return a;
	return b;
}


