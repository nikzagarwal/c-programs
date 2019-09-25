#include<iostream>
#include<conio.h>
using namespace std;
int max(int,int,int);
int min(int,int,int);
void main()
{
	int a,b,c;
	cout<<"Enter three elements"<<endl;
	cin>>a>>b>>c;
	int res=max(a,b,c);
	int res2=min(a,b,c);
	cout<<"Maximum no. = "<<res;
	cout<<"\nMinimum no. = "<<res2;
	getch();
}
int max(int a, int b,int c)
{
	int max;
	max=a>b?a>c?a:c:b>c?b:c;
	return max;
}
int min(int a, int b,int c)
{
	int min=a<b?a<c? a:c:b<c?b:c;
	return min;
}	
	
