#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Binary
 {
	 string s;
 public:
	 void read(void)
	 {
		 cout<<"Enter a bin no.";
		 cin>>s;
	 }
	void chk_bin(void)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)!='0'&&s.at(i)!='1')
			{
				cout<<"\n quit";
				getch();
				exit(0);
			}
		}
	}
	void ones(void)
	{
		chk_bin();
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)=='0')
				s.at(i)='1';
			else
				s.at(i)='0';
		}
	}
	void display(void)
	{
		ones();
		cout<<"\n compliment of above is"<<s;
	}
};
int main()
{
	Binary b;
	b.read();
	b.display();
	getch();
	return 0;
}


