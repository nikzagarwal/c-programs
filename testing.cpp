#include<iostream>
using namespace std;
class test
{
public:
    int a;
    test(){}
    test(int x)
    {
        a=x;
    }
    test(test &x)
    {
        a=x.a;
    }
};
int main()
{
    test A(100);
    test B(A);
    test C=A;
    test D;
    cout<<"A="<<A.a<<endl;
    cout<<"B="<<B.a<<endl;
    cout<<"C="<<C.a<<endl;
    cout<<"D="<<D.a<<endl;
    D=A;
    cout<<"D="<<D.a<<endl;
    return 0;
}
