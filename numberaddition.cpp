#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
    int info;
    Node* link;
};
typedef struct Node node;
class add
{
public:
    void leadnumber(Node *head)
    {

        char c;
        while(true)
        {
            cin>>c;
            if(isdigit(c))
            {
                insert_front(c-48,head);
            }
            else
               break;
        }
    }
    void insert_front(int item,Node *first)
    {
       Node *temp=new Node;
      temp->info=item;
      temp->link=first;
      if(first==NULL)
      {
        first=temp;
        delete temp;
        return;
      }
      else
      {
        first=temp;
      }
    }
    void display(Node *head)
    {
        cout<<"hi";
        int k=0;
        cout<<head->info<<endl;
        cout<<head->info<<endl;

        cout<<head->info<<endl;
        head=head->link;
         cout<<head->info<<endl;
        cout<<head->info<<endl;
        if(head->link==head)
        {
            cout<<"empty";
            return;
        }
        int *a=new int;
        Node *cur=head->link;
        cout<<"hi"<<cur->info;
        while(cur!=head)
         {
            a[k++]=cur->info;
            cur=cur->link;
        }
        while(--k!=-1)
            cout<<a[k];
    }
    void add_log(Node *h1,Node *h2,Node *h3)
    {
        Node c,h;
        int sum,carry,digit;
        carry=0;
        Node *c1=h1->link;
        Node *c2=h2->link;
        while(c1!=h1&&c2!=h2)
        {
            sum=c1->info+c2->info+carry;
            digit=sum%10;
            carry=sum/10;
            insert_rear(digit,&h3);
               c1=c1->link;
            c2=c2->link;
        }
        if(c1!=h1)
        {
            Node c=c1;
            Node h=h1;
        }
        if(c2!=h1)
        {
            c=c2;
            h=h2;
        }
        while(c!=h)
        {
            sum=c->info+carry;
            digit=sum%10;
            carry=sum/10;
            insert_rear(digit,h3);
            c=c->link;
        }
        if(carry==1)
            insert_rear(carry,h3);
    }
    void insert_rear(int item,Node first)
    {
         Node temp;
          Node cur;
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
};

int main()
{
    add ob;
    Node *h1=NULL,*h2=NULL,*h3=NULL;
    cout<<"enter digits for first no."<<endl;
    ob.leadnumber(h1);
    cout<<"enter digits for second no."<<endl;
    ob.leadnumber(h2);
    cout<<"first no. is:- ";
    ob.display(h1);
    cout<<"second no. is:- ";
    ob.display(h2);
    ob.add_log(h1,h2,h3);
    ob.display(h3);

}

