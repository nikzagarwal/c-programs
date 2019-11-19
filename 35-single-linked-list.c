#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct node
{
    int info;
    struct node *link;
};
typedef struct node *node;

node insert _front()
{
    node temp-new node;
    if(first==NULL)
        return temp;
    temp->info=item;
    temp->link=first;
    return temp;
}
class linkedlist
{
public:
    node cur,prev,temp,first,last;
    int item;
    linkedlist()
    {
        node first=NULL;
    }

    node insert_front()
    {
        node temp=new node;
        if(first==null)
            return temp;
        temp->info=item;
        temp->link=first;
        return temp;
    }

    node delete_front()
    {
        temp=firt;
        first=first->link;
        delete(temp)
        return first;
    }

    node insert_rear()
    {

        temp=first;
        if(first==null)
            return temp;
        while(first->link!=NULL)
            first=first->link;
        cur->info=item;
        cur->link=NULL;
        first->link=cur;
        return temp;
    }

    node delete_rear()
    {
        if(first==NULL)
            return NULL;
        cur=first;
        prev=NULL;
        while(cur->link!=NULL)
        {
            prev=cur;
            cur=cur->link;
            prev->link=NULL;
        }
        delete cur;
        return first;
    }

    void display()
    {
        while(first!=NULL)
        {

            cout<<first->item;
            first=first->link;
        }
    }
};
int main()
{

    int choice;
    linkedlist obj;
    for(;;)
    {
        cout<<"1:insert front \n2:insert rear \n3:delete front \n4:delete rear \n5:display \n6.:exit\n";
        cout<<"enter choice";
        cin>>choice;
        switch(choice)
        {
        case 1:
            obj.insert_front();
            break;
        case 2:
            obj.insert_rear();
            break;
        case 3:
            obj.delete_front();
            break;
        case 4:
            obj.delete_rear();
            break;
        case 4:
            obj.display();
            break;
        case 5:
            obj.insert_front();
            break;
        default:
            exit(0);
        }
    }
    getch();
    return 0;
}

