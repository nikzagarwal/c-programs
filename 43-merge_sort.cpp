#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class merge
{
public:
	int key,n,mid;
	int ar[100];
	merge()
	{
		key=0;
	}

	void simplemerge(int ar[],int low,int mid,int high)
	{
		int i,j,l[20];
		key=low;
		i=low;
		j=mid+1;
		while(i<=mid&&j<=high)
		{	if(ar[j]<ar[i])
				l[key++]=ar[i++];
			else
				l[key++]=ar[j++];
		}
	while(i<=mid)
		l[key++]=ar[i++];
	while(j<=high)
		l[key++]=ar[j++];
	for(i=low;i<=key-1;i++)
		ar[i]=l[i];
	}
	void sort(int a[],int low, int high)
		{
			if(low<high)
			{
				mid=(low+high)/2;
				sort(a,low,mid);
				sort(a,mid+1,high);
				simplemerge(a,low,mid,high);
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
	merge obj;
	obj.getvalue();
	cout<<"elements before sorting\n";
	obj.display();
	obj.sort(obj.ar,0,obj.n-1);
	cout<<"elements after sorting\n";
	obj.display();
	getch();
	return 0;
}

