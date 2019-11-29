#include<iostream>
#include<stdlib.h>
#define size 5
using namespace std;
class queue
{
private:
	int i,s[10],f,r,count;
public:
	int item;
	queue()
	{
	    r=-1;
        f=0;
		count=0;
	}
	void push()
		{
			if(count==size)
				cout<<"queue full \n";
			else
            {
                 r=(r+1)%size;
				s[r]=item;
				count++;
            }
		}
	void pop()
	{
		if(count==0)
			cout<<"queue empty \n";
		else
        {
            f=(f+1)%size;
			count--;
        }
	}
	void display()
	{
		if(count==0)
			cout<<"queue empty \n";
		else
		{
		    int j=f;
			for(i=1;i<=count;i++)
            {
                cout<<s[j]<< endl;
				j=(j+1)%size;
            }
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
	return 0;
}
