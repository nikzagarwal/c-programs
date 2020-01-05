
//doubly circular link list
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    node *llink,*rlink;
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
        temp->rlink=temp;
        temp->llink=temp;
        if(first==NULL)
        {
            first=temp;
        }

        else
        {
            node *last=new node;
            last=first->llink;
            temp->llink=last;
            temp->rlink=first;
            first->llink=temp;
            last->rlink=temp;
            first=temp;
        }

    }

    void insert_rear()
    {
        node *temp=new node;
        temp->info=item;
        temp->llink=temp;
        temp->rlink=temp;
        if(first==NULL)
        {
            first=temp;
        }
        else
        {
            node *last=new node;
            last=first->llink;
            temp->llink=last;
            temp->rlink=first;
            first->llink=temp;
            last->rlink=temp;
        }
    }

    void delete_front()
    {
        if(first==NULL)
        {
            cout<<"empty list\n";
            return;
        }
         if(first->rlink==first)
        {
            first=NULL;
            return;
        }
        node *temp=new node;
        temp=first;
        node *last=new node;
        last=first->llink;
        first=first->rlink;
        first->llink=last;
        last->rlink=first;
        delete temp;
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
         if(first->rlink==first)
        {
            first=NULL;
            return;
        }
        cur=first->llink;
        prev=cur->llink;
        prev->rlink=cur->rlink;
        first->llink=prev;
        delete cur;
    }

    void search_delete()
    {
        node *prev=new node;
        node *cur=new node;
        cur=first;
        prev=NULL;
        if(cur==NULL)
        {
            cout<<"empty list";
            return;
        }
        if(cur->rlink==first&&cur->info==item)
        {
            cout<<"found and deleted"<<endl;
            first=NULL;
            return;
        }
        while(cur->rlink!=first)
        {
            if(cur->info==item)
            {
                cout<<"found and deleted"<<endl;
                if(cur==first)
                {
                    node *last=new node;
                    last=first->llink;
                    first=first->rlink;
                    first->llink=last;
                    last->rlink=first;
                    return;
                }
                node *temp=new node;
                temp=cur->rlink;
                prev->rlink=temp;
                temp->llink=prev;
                return;
            }
            prev=cur;
            cur=cur->rlink;
        }
        cout<<"not found";
    }

    void display()
    {
        node *temp=new node;
        temp=first;
        if(temp==NULL)
        {
            cout<<"Empty list\n";
            return;
        }
        while(temp->rlink!=first)
        {
            cout<<temp->info<<endl;
            temp=temp->rlink;
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

