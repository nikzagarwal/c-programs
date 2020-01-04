#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
struct node
{
float cf,px,py;
struct node *link;
};

class poly
{
public:
    node* insertrear(float cf,float x,float y,node *first)
    {
        node *cur=new node;
        node *temp=new node;
        temp->cf=cf;
        temp->px=x;
        temp->py=y;
        temp->link=NULL;
         if(first==NULL)
        {
            first=temp;
               return first;
        }
        cur=first;
        while(cur->link!=NULL)
        {
            cur=cur->link;
        }
        cur->link=temp;
        return first;

    }
    node* read_poly(node *head)
    {

        int i;
        float px,py,cf;
        cout<<"Enter the poly"<<endl;
        for(i=1;;i++)
        {
            cout<<"coeff=";
            cin>>cf;
            if(cf==-999)
                break;
            cout<<"power of x=";
            cin>>px;
            cout<<"power of y=";
            cin>>py;
            head=insertrear(cf,px,py,head);
        }
        return head;
    }
    float evaluate(node *head)
    {
        float x,y,sum=0;
        node *poly=new node;
        poly=head;
        cout<<"enter value of x and y\n";
        cin>>x>>y;
        for(poly=head;poly!=NULL;poly=poly->link)
            sum+=poly->cf*pow(x,poly->px)*pow(y,poly->py);
        return sum;
    }
    void display(node *head)
    {
        node *temp=new node;
        if(head==NULL)
        {
            cout<<"empty";
            return;
        }
        cout<<"coefficients and powers of all terms are:-"<<endl;
        for(temp=head;temp!=NULL;temp=temp->link)
            cout<<temp->cf<<temp->px<<temp->py<<endl;
    }
};

int main()
{
    node *head=NULL;
    poly obj;
    float res;
    cout<<"enter the polynomial";
    head=obj.read_poly(head);
    res=obj.evaluate(head);
    obj.display(head);
    cout<<"result of polynomial="<<res;
    return 0;
}
