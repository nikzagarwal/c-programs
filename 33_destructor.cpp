#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class a
{
    static int count ;
public:
    a()
    {
        count++;
        cout<<"no. of object created "<<count<<endl;

    }
    ~a()
    {
        cout<<"no. of object destroyed "<<count<<endl;
        count--;

    }
};
int a::count;
int main()
{
    a c1,c2,c3,c4;
    cout<<"block1"<<endl;
    a c5;
    cout<<"block2"<<endl;
    a c6;
    return 0;
}
