#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class project
{
public:
    string country[50]= {"INDIA","AFGHANISTAN","DENMARK","BRAZIL","FINLAND","IRAN","KENYA","LIBYA","PAKISTAN","NIGER","OMAN","POLAND","TAIWAN","ARGENTINA","BANGLADESH"};
    string capital[50]= {"NEW DELHI","KABUL","COPENHAGEN","BRASILIA","HELSINKI","TEHRAN","NAIROBI","TRIPOLI","ISLAMABAD","NIAMEY","MUSCAT","WARSAW","TAIPEI","BUENOS AIRES","DHAKA"};
    string language[50]= {"HINDI","DARI","DANISH","PORTUGUESE","FENNISH SWEDISH","PERSIAN","SWAHILI","BERBER","URDU","FRENCH","ARABIC","POLISH","CHINESE","SPANISH","BENGALI"};

    //FUNCTION TO PERFORM BINARY SEARCH
    int bin(string s[],string e)
    {
        int smallest=0,l=15;
        for(; smallest<=l;)
        {
            int m=(smallest+l)/2;
            if(e.compare(s[m])<0)
                l=m-1;
            if(e.compare(s[m])>0)
                smallest=m+1;
            if(e.compare(s[m])==0)
                return m;
        }
        return -1;
    }
    //FUNCTION TO SORT THE STRING ARRAY
    void sort()
    {
        int n=15;
        for (int i=0; i<=n-2; i++) //sorting array
        {
            int s=arrangeAlphabetical(i);
            string temp=country[i];
            country[i]=country[s];
            country[s]=temp;
            temp=capital[i];
            capital[i]=capital[s];
            capital[s]=temp;
            temp=language[i];
            language[i]=language[s];
            language[s]=temp;

        }
    }



    //function to find the string that comes first alphabetically starting from index number 'i'
    int arrangeAlphabetical(int i)
    {
        int sm=i;
        for (int k=i+1; k<15; k++)
            if (country[k].compare(country[sm])<0)
                sm=k;
        return sm;
    }

    void searchcountry()
    {
        cout<<"ENTER A COUNTRY\n";
        string search ;
        cin>>search;
        transform(search.begin(), search.end(), search.begin(), ::toupper);
        displayLine(100,'*');
        sort();
        int i=bin(country,search);
        if(i!=-1)
        {
            cout<<"COUNTRY FOUND\n";
            cout<<"COUNTRY:-\t"+country[i]<<endl;
            cout<<"CAPITAL:-\t"+capital[i]<<endl;
            cout<<"LANGUAGE:-\t"+language[i]<<endl;
            displayLine(100,'*');
        }
        else
            cout<<"COUNTRY NOT FOUND\n";
        cout<<"CONTINUE?  :-  Y  :  N\n";
        char ch;
        cin>>ch;
        ch=toupper(ch);
        if(ch=='Y')
            displayMenu();
        else
            exit(0);

    }

    void displayMenu()
    {
        cout<<"\t\t\t\tWELCOME\n";
        displayLine(100,'*');
        cout<<"1.SEARCH COUNTRY\n";
        cout<<"2.DISPLAY DATA\n";
        cout<<"3.EXIT\n";
        cout<<"ENTER YOUR CHOICE(1/2/3)\n";
        int ch;
        cin>>ch;
        displayLine(100,'*');
        switch(ch)
        {
        case 1:
            searchcountry();
            break;
        case 2:
            cout<<"\t\t\t\tDATA\n";
            displayLine(100,'*');
            displayData();
            break;
        case 3:
            cout<<"YOU HAVE OPTED FOR EXIT\n";
            exit(0);
        default:
            cout<<"wrong choice\n";
            displayMenu();
            break;
        }
    }
    //FUNCTION TO PRINT Line
    void displayLine(int n,char ch)
    {
        for(int i=0; i<=n; i++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    //FUNCTION TO DISPLAY DATA
    void displayData()
    {
        int ctr=0;
        cout<<"Sno.\t"<<"CAPITAL"<<space(20);
        cout<<"COUNTRY"<<space(20);
        cout<<"LANGUANGE"<<space(20)<<endl;
        displayLine(100,'*');
        for(int i=1; i<=15; i++)
        {
            cout<<ctr+1<<"\t";
            cout<<country[ctr]<<space(20);
            cout<<capital[ctr]<<space(20);
            cout<<language[ctr]<<space(20)<<endl;
            displayLine(100,'_');
            ctr++;
            cout<<endl;
        }
        cout<<"CONTINUE?  :-  Y  :  N\n";
        char ch;
        cin>>ch;
        ch=toupper(ch);
        if(ch=='Y')
            displayMenu();
        else
            exit(0);
    }
//FUNCTION TO RETURN SPACES AS STRING
    string space(int n)
    {
        string word="";
        for(int i=1; i<=n; i++)
        {
            word=word+" ";
        }
        return word;
    }
};

int main()
{
    project obj;
    obj.displayMenu();
    getch();
    return 0;
}
