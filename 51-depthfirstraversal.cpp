//depth first traversal for directed graph
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int cost[10][10],i,j,k,m,n,stk[10],top,v,visited[10],visit[10];
int main()
{
    cout<<"enter the no. of vertex";
    cin>>n;
    cout<<"enter the no. of edges";
    cin>>m;
    cout<<"\nEdges\n";
    for(k=1; k<=m; k++)
    {
        cout<<"enter two vertex where edge is to be connected \n";
        cin>>i>>j;
        cost[i][j]=1;
    }
    cout<<"enter the initial vertex to traverse from:\n";
    cin>>v;
    cout<<"DFS order of visited vertex:\n";
    cout<<v<<" ";
    visited[v]=1;
    k=1;
    while(k<n)//loop for total no. of vertex
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0&&visited[j]!=1)//&&visit[j]!=1)
            {
               // visit[j]=1;
                stk[top++]=j;
            }
        v=stk[--top];
        cout<<v<<" ";
        k++;
       // visit[v]=0;
        visited[v]=1;
    }
    return 0;
}
