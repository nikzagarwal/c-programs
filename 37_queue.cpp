#include<iostream>
#define size 5
using namespace std;
class queue
{
private:
	int i,s[10],top,bottom;
public:
	int item;
	queue()
	{
		top=-1;
		bottom=0;
	}
	void push()
		{
			if(top==size-1)
				cout<<"queue full \n";
			else
				s[++top]=item;
		}
	void pop()
	{
		if(bottom>top)
			cout<<"queue empty \n";
		else 
			bottom++;
	}
	void display()
	{
		if(bottom>top)
			cout<<"empty \n";
		else
		{
			for(i=bottom;i<=top;i++)
				cout<<s[i]<< endl;
		}
	}
};

int main()
{
	int choice;
	queue ob;
	for(;;)
	{
		cout<<"1:push\n2:pop\n3:display \n4:exit"<<endl;
		cout<<"Enter choice";
		cin>>choice;
		switch(choice)
		{
		case 1: cout<<"enter item to be inserted";
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
}