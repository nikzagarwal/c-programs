#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class stack
{
public:
	char symbol,s[30],infix[30],postfix[30];
	int top,i,j;
	stack()
	{
		top=-1;
	}
	int g(char symbol)
	{
		switch(symbol)
		{
		case '+':
		case '-': return 1;		
		case '*':
		case '/': return 3;
		case '^':
		case '$': return 6;
		case '(':return 9;
		case ')': return 0;
		default:return 7;
		}
	}
	int f(char symbol)
	{
		switch(symbol)
		{
		case '+':
		case '-': return 2;		
		case '*':
		case '/': return 4;
		case '^':
		case '$': return 5;
		case '(':return 0;
		case '#': return -1;
		default:return 8;
		}
	}

	void infix_postfix()
	{
		s[++top]='#';
		 j=0;
		for( i=0;i<strlen(infix);i++)
		{
			symbol=infix[i];
			while((f(s[top])>g(symbol)))
			{
				postfix[j++]=s[top--];
			}
			if(f(s[top])!=(g(symbol)))
				s[++top]=symbol;
			else
				top--;
		}
		while(s[top]!='#')
		{
			postfix[j++]=s[top--];
		}
		postfix[j]='\0';
	}
	void display()
	{
		cout<<"enter infix expression \n";
		cin>>infix;
		infix_postfix();
		cout<<"new code:\n";
		cout<<postfix;
	}
};

int main()
{
	stack obj;
	obj.display();
	getch();
	return 0;
	
}