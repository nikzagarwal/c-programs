//pass array to function
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void display(int []);

void display(int m[])
{
	cout<<"Displaying marks:"<<endl;
	for(int i=0;i<5;i++)
		cout<<"element"<<i+1<<":"<<m[i]<<endl;
}
int main()
{
	int marks[5]={8,7,6,5,4};
	display(marks);
	return 0;
	getch();
}

