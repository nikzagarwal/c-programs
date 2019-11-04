#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{

    int ar[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
     {
         cout<<*(ar+i)<<endl;
    }
    return 0;
}
