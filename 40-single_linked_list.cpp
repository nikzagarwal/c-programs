//single link list
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
        return;
      }
      else
      {
        first=temp;
      }
    }

    void delete_front()
    {
        if(first==NULL)
        {
            cout<<"empty list\n";
            return;
        }
        first=first->link;
    }

    void insert_rear()
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

    void search_delete()
    {
        node *prev=new node;
        node *cur=new node;
        prev=NULL;
        cur=first;
        while(cur!=NULL)
        {
            if(cur->info==item)
            {
                cout<<"found and deleted"<<endl;
                if(cur==first)
                {
                    first=first->link;
                    return;
                }
                prev->link=cur->link;
                return;
            }
            prev=cur;
            cur=cur->link;
        }
        cout<<"not found";
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
        cout<<"1:insert front \n2:insert rear \n3:delete front \n4:delete rear \n5:display \n6:search and delete \n7.:exit\n";
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
        case 6:
            cout<<"enter item\n";
            cin>>obj.item;
            obj.search_delete();
            break;
        default:
            exit(0);
        }
    }
    getch();
    return 0;
}

