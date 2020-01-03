
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class insertion
{
public:
	int key,n;
	int ar[100];
	insertion()
	{
		key=0;
	}

	void sort()
	{
		for(int i=0;i<n;i++)
		{
			key=ar[i];
			int j=i-1;
			while(j>=0&&ar[j]>key)
			{
			ar[j+1]=ar[j];
			j--;
			}
			ar[j+1]=key;
		}
	}
	void getvalue()
	{
		cout<<"enter total elements\n";
		cin>>n;
		cout<<"enter elements\n";
		for(int i=0;i<n;i++)
			cin>>ar[i];
	}
	void display()
	{
		for(int i=0;i<n;i++)
			cout<<ar[i]<<endl;
	}
};
int main()
{
	insertion obj;
	obj.getvalue();
	cout<<"elements before sorting\n";
	obj.display();
	obj.sort();
	cout<<"elements after sorting\n";
	obj.display();
	getch();
	return 0;
}
