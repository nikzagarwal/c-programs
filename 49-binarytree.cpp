
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
class bt
{

public:
    node* insert(int item,node *root)
    {

        char direction[10];
        int i;
        node *temp=new node;
        node *cur=new node;
        node *prev=new node;
        temp->info=item;
        temp->rlink=temp->llink=NULL;
        if(root==NULL)
            return temp;
        cout<<"give direction\n";
        cin>>direction;
        prev=NULL;
        cur=root;
        for(i=0; i<strlen(direction)&&(cur!=NULL); i++)
        {
            prev=cur;
            if(direction[i]=='L')
                cur=cur->llink;
            else
                cur=cur->rlink;
        }
        if(direction[i-1]=='L')
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

};
int main()
{
    bt obj;
    node *root=NULL;
    root=obj.insert(10,root);
    root=obj.insert(5,root);
    root=obj.insert(20,root);
     root=obj.insert(15,root);
    root=obj.insert(30,root);
    obj.preorder(root);

}
