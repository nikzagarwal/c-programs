#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
class stack
{
public:
	char s[30],postfix[30];
	int result,top,i,j;
	stack()
	{
		top=-1;
	}

	void exp()
	{
		for(int i=0;i<strlen(postfix);i++)
		{
			char ch=postfix[i];
			if(isdigit(ch))
				s[++top]=ch-48;
			else
			{
				int n=op(s[top--],ch,s[top--]);
				s[++top]=n;
			}
		}
		result=s[top--];
	}
	int op(int op2,char symbol,int op1)
	{
		switch(symbol)
		{
		case '+':return op1+op2;
		case '-':return op1-op2;
		case '*':return op1*op2;
		case '/': return op1/op2;
		case '^':
		case '$': return pow((double)op2,(double)op1);
		}
	}
};

int main()
{
	stack obj;
	cout<<"enter exp \n";
	cin>>obj.postfix;
	obj.exp();
	cout<<obj.result;
	getch();
	return 0;

}
