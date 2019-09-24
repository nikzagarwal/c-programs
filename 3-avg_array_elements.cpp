#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int a[50],n=0,avg,sum=0;
	cout<<"Enter no. of elements"<< endl;
	cin>>n;
	cout<<"Enter n values "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	avg=sum/n;
	cout<<"Average ="<<avg;
	getch();
}