#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int n;
void linearsearch(int ar[])
{

    for(int i=0; i<n; i++)
        if(ar[i]==n)
        {
            cout<<"element found at pos:"<<i+1;
            return;
        }
    cout<<"element not found";
}

int main()
{
    int ar[10]= {1,2,3,4,5,6,7};
    cout<<"enter element to search";
    cin>>n;
    linearsearch(ar);
}
