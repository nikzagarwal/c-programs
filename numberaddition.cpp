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

class add
{
public:
    Node* leadnumber(Node *head)
    {
        cout<<"enter digits one by one and any letter to stop \n";
        char c;
        while(true)
        {
            cin>>c;
            if(isdigit(c))
            {
                head=insert_front(c-48,head);
            }
            else
                break;
        }
        return head;
    }
    Node* insert_front(int item,Node *first)
    {
        Node *temp=new Node;

        temp->info=item;
        temp->link=first;
        if(first==NULL)
        {
            first=temp;
            delete temp;
            return first;
        }
        else
        {
            first=temp;
        }
        return first;
    }
    void display(Node *head)
    {
        int k=0;
        if(head->link==NULL)
        {
            cout<<"empty";
            return;
        }
        int *a=new int;
        Node *cur=head;
        while(cur!=NULL)
        {
            a[k++]=cur->info;
            cur=cur->link;

        }
        while(--k!=-1)
            cout<<a[k];
        cout<<endl;
    }
    Node* add_log(Node *h1,Node *h2,Node *h3)
    {
        Node *c,*h;
        int sum,carry,digit;
        carry=0;
        Node *c1=h1;
        Node *c2=h2;
        while(c1!=NULL&&c2!=NULL)
        {
            sum=c1->info+c2->info+carry;
            digit=sum%10;
            carry=sum/10;
            h3= insert_rear(digit,h3);
            c1=c1->link;
            c2=c2->link;
        }
        if(c1!=NULL)
            c=c1;
        else
            c=c2;

        while(c!=NULL)
        {
            sum=c->info+carry;
            digit=sum%10;
            carry=sum/10;
            h3=insert_rear(digit,h3);
            c=c->link;
        }
        if(carry==1)
            h3=insert_rear(carry,h3);
        return h3;
    }
    Node* insert_rear(int item,Node *first)
    {
        Node *temp=new Node;
        Node *cur=new Node;
        temp->info=item;
        temp->link=NULL;
        if(first==NULL)
        {
            first=temp;
            delete temp;
            return first;
        }
        cur=first;
        while(cur->link!=NULL)
            cur=cur->link;
        cur->link=temp;
        return first;
    }
};

int main()
{
    add ob;
    Node *h1=NULL,*h2=NULL,*h3=NULL;
    cout<<"enter digits for first no."<<endl;
    h1=ob.leadnumber(h1);
    cout<<"enter digits for second no."<<endl;
    h2=ob.leadnumber(h2);
    cout<<"first no. is:- ";
    ob.display(h1);
    cout<<"second no. is:- ";
    ob.display(h2);
    h3=ob.add_log(h1,h2,h3);
    cout<<"sum of two no. is:- ";
    ob.display(h3);

}

