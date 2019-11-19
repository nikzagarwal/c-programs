
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

    void insert_front()
    {
       node *temp=new node;
      temp->info=item;
      temp->link=first;
      if(first==NULL)
      {
        first=temp;
        temp=NULL;
      }
      else
      {
        first=temp;
      }
    }

    void delete_front()
    {
         node *temp=new node;
        if(first==NULL)
        {
            cout<<"empty list\n";
            return;
        }
        temp=first;
        first=first->link;
        delete(temp);
    }

    void insert_rear()
    {
         node *temp=new node;
          node *last=new node;
        temp->info=item;
        temp->link=NULL;
        if(first==NULL)
        {
            first=temp;
        }
        last=first;
        while(last->link!=NULL)
            last=last->link;
        last->link=temp;
    }

    void delete_rear()
    {
         node *prev=new node;
          node *cur=new node;
        if(first==NULL)
        {
            cout<<"empty list\n";
            return;
        }
        cur=first;
        prev=NULL;
        while(cur->link!=NULL)
        {
            prev=cur;
            cur=cur->link;
        }
            prev->link=NULL;
        delete cur;
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
    list obj;
    for(;;)
    {
        cout<<"1:insert front \n2:insert rear \n3:delete front \n4:delete rear \n5:display \n6.:exit\n";
        cout<<"enter choice\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"enter item\n";
            cin>>obj.item;
            obj.insert_front();
            break;
        case 2:
            cout<<"enter item\n";
            cin>>obj.item;
            obj.insert_rear();
            break;
        case 3:
            obj.delete_front();
            break;
        case 4:
            obj.delete_rear();
            break;
        case 5:
            obj.display();
            break;
        default:
            exit(0);
        }
    }
    getch();
    return 0;
}

