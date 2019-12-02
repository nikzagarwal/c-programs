//circular link list
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
    node *last;
    int item;
    list()
    {
        last=NULL;
    }

    void insert_front()
    {
       node *temp=new node;
      temp->info=item;
      temp->link=temp;
      if(last==NULL)
      {
        last=temp;
        delete temp;
      }
      else
      {
      temp->link=last->link;
          last->link=temp;
      }
    }

    void insert_rear()
    {
         node *temp=new node;
          temp->info=item;
        temp->link=temp;
        if(last==NULL)
        {
            last=temp;
            delete temp;
            return;
        }
        else
      {
      temp->link=last->link;
          last->link=temp;
        last=last->link;
      }
    }

    void delete_front()
    {
        if(last==NULL)
        {
            cout<<"empty list\n";
            return;
        }
        node *temp=new node;
        temp=last->link;
        last->link=temp->link;
    }


    void delete_rear()
    {
         node *prev=new node;
          node *cur=new node;
        if(last==NULL)
        {
            cout<<"empty list\n";
            return;
        }
        if(last->link==NULL)
        {
            last=NULL;
            return;
        }
        cur=last->link;
        prev=last;
        while(cur!=last)
        {
            prev=cur;
            cur=cur->link;
        }
            prev->link=cur->link;
        delete cur;
        last=prev;
    }

    void search_delete()
    {
        node *prev=new node;
        node *cur=new node;
        cur=last->link;
        prev=last;
        while(cur!=NULL)
        {
            if(cur->info==item)
            {
                cout<<"found and deleted"<<endl;
                if(cur==last->link)
                {
                    last->link=cur->link;
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
    temp=last;
    if(temp==NULL)
    {
        cout<<"Empty list";
   return;
    }
   temp=temp->link;
    while(temp->link!=last->link)
    {
      cout<<temp->info<<endl;
      temp=temp->link;
        }
        cout<<temp->info<<endl;
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

