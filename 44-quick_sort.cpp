

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class quick
{
public:
	int key,n;
	int ar[100];
	quick()
	{
		key=0;
	}

	int partition(int ar[],int low,int high)
	{
		int i,j,temp;
		key=ar[low];
		i=low+1;
		j=high;
		while(1)
		{
			while(i<high&&key>=ar[i])
				i++;
			while(key<ar[j])
				j--;
			if(i<j)
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
			else
			{
				temp=ar[low];
				ar[low]=ar[j];
				ar[j]=temp;
			}
			return j;
		}
	}
	void sort(int a[],int low, int high)
		{
			int j;
			if(low<high)
			{
				j=partition(a,low,high);
				sort(a,low,j-1);
				sort(a,j+1,high);
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
	quick obj;
	obj.getvalue();
	cout<<"elements before sorting\n";
	obj.display();
	obj.sort(obj.ar,0,obj.n-1);
	cout<<"elements after sorting\n";
	obj.display();
	getch();
	return 0;
}
