#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class merge
{
public:
	int n;
	int ar[100];

	void simplemerge(int ar[],int low,int mid,int high)
	{
		int i,j,k,c[20];
		k=low;
		i=low;
		j=mid+1;
		while(i<=mid&&j<=high)
		{	if(ar[i]<ar[j])
				c[k++]=ar[i++];
			else
				c[k++]=ar[j++];
		}
	while(i<=mid)
		c[k++]=ar[i++];
	while(j<=high)
		c[k++]=ar[j++];
	for(i=low;i<=k-1;i++)
		ar[i]=c[i];
	}
	void sort(int a[],int low, int high)
		{
			int mid;
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
