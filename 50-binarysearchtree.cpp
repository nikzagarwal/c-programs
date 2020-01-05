//insert a node at specific direction like RRLLR direction
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
class bst
{

public:
    node* insert(int item,node *root)
    {
        node *temp=new node;
        node *cur=new node;
        node *prev=new node;
        temp->info=item;
        temp->rlink=temp->llink=NULL;
        if(root==NULL)
            return temp;
        prev=NULL;
        cur=root;
        while(cur!=NULL)
        {

            prev=cur;
            cur=item<cur->info?cur->llink:cur->rlink;
        }
        if(item<prev->info)
            prev->llink=temp;
        else
            prev->rlink=temp;
        return root;
    }

    void preorder(node *root)
    {
        if(root!=NULL)
        {
            cout<<root->info<<endl;
            preorder(root->llink);
            preorder(root->rlink);
        }
    }

    node* deleteitem(int item,node *root)
    {
        node *parent=new node;
        node *cur=new node;
        node *suc=new node;
        node *q=new node;
        if(root==NULL)
        {
            cout<<"empty";
            return root;
        }
        parent=NULL;
        cur=root;
        while(cur!=NULL&&item!=cur->info)
        {

            parent=cur;
            cur=item<cur->info?cur->llink:cur->rlink;
        }
        if(cur==NULL)
        {
            cout<<"item not found";
            return root;
        }
        if(cur->llink==NULL)
            q=cur->rlink;
        else if(cur->rlink==NULL)
            q=cur->llink;
        else
        {
            suc=cur->rlink;
            while(suc->llink!=NULL)
                suc=suc->llink;
            suc->llink=cur->llink;
            q=cur->rlink;
        }
        if(cur==parent->llink)
            parent->llink=q;
        else
            parent->rlink=q;
        delete cur;
        return root;
    }
};
int main()
{
    bst obj;
    node *root=NULL;
    while(true)
    {
        int item;
        cout<<"enter item"<<endl;
        cin>>item;
        if(item<0)
            break;
        root=obj.insert(item,root);
    }
    obj.preorder(root);
    int item;
    cout<<"enter item to delete";
    cin>>item;
    root=obj.deleteitem(item,root);
    cout<<"After deletion function:\n";
    obj.preorder(root);

}
