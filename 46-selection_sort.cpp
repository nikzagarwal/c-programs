

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class selection
{
public:
	int min,minpos,n;
	int ar[100];
	selection()
	{
		min=0;
		minpos=0;
	}

	void sort()
	{
		for(int i=0;i<n;i++)
		{
			min=ar[i];
			minpos=i;
			for(int j=i+1;j<n;j++)
			{
				if(ar[j]<min)
				{
					minpos=j;
				min=ar[j];
				}
			}
			int temp=ar[i];
			ar[i]=ar[minpos];
			ar[minpos]=temp;
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
	selection obj;
	obj.getvalue();
	cout<<"elements before sorting\n";
	obj.display();
	obj.sort();
	cout<<"elements after sorting\n";
	obj.display();
	getch();
	return 0;
}
