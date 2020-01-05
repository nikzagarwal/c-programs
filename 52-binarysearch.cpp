#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int n;
void binarysearch(int[],int, int);

void binarysearch(int ar[],int low,int high)
{

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ar[mid]==n)
        {
            cout<<"element found at position:"<<mid+1;
            return;
        }
        if(ar[mid]>n)
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<"element not found";
}

int main()
{
    int ar[10]={1,2,3,4,5,6,7};
    cout<<"enter element to search";
    cin>>n;
    binarysearch(ar,0,6);
}
