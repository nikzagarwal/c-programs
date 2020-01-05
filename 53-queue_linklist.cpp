#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    node *link;
};

class list
{
public:
    node *first;
    int item;
    list()
    {
        first=NULL;
    }

    void push()//push is nothing but insert rear for queue
    {
         node *temp=new node;
          node *cur=new node;
        temp->info=item;
        temp->link=NULL;
        if(first==NULL)
        {
            first=temp;
            delete temp;
            return;
        }
        cur=first;
        while(cur->link!=NULL)
            cur=cur->link;
        cur->link=temp;
    }

    void pop()//pop is nothing but delete *front* for queue
    {
         if(first==NULL)
        {
            cout<<"empty list\n";
            return;
        }
        first=first->link;
    }


    void display()
    {
        node *temp=new node;
    temp=first;
    if(temp==NULL)
        cout<<"Empty list";
    while(temp!=NULL)
    {
      cout<<temp->info<<endl;
      temp=temp->link;
        }
    }
};
int main()
{
    int choice;
    list ob;
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
