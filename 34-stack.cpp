#include<iostream>
#include<stdlib.h>
#define stack_size 5
using namespace std;
class stack
{
private:
	int i,s[10],top;
public:
	int item;
	stack()
	{
		top=-1;
	}
	void push()
		{
			if(top==stack_size-1)
				cout<<"stack full \n";
			else
				s[++top]=item;
		}
	void pop()
	{
		if(top==-1)
			cout<<"stack empty \n";
		else
			top--;
	}
	void display()
	{
		if(top==-1)
			cout<<"empty \n";
		else
		{
			for(i=0;i<=top;i++)
				cout<<s[i]<< endl;
		}
	}
};

int main()
{
	int choice;
	stack ob;
	for(;;)
	{
		cout<<"1:push\n2:pop\n3:display \n4:exit"<<endl;
		cout<<"Enter choice";
		cin>>choice;
		switch(choice)
		{
		case 1: cout<"enter item to be inserted";
			cin>>ob.item;
			ob.push();
			break;
		case 2: ob.pop();
			break;

		case 3:ob.display();
			break;
		default:exit(0);
		}
	}
	return 0;
}
