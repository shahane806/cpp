/*

    Create a classs String which contains a character pointer ( use new and elete operator). 
    write a c++ program to overload following operators: 
    ! To reverse the case of each alphabet from given string
    [] To print a character present at specified index
    < To conpare length of two strings
    == To check equality of two strings
    + To concatenate two strings
    
*/
#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
class String
{
    private : 
    char * p;
    int i;
    public  :
   void getString(char s[30])
    {
       p = new char [30];
      for ( i  = 0; i < strlen(s); i++)
      {
          p[i] = s[i];
             cout<<p[i];
      }
      p[i]='\0';
      cout<<endl;
    }
    ~String()
    {
        delete p;
    }
    void operator !()
    {
        strrev(p);
        cout<<p<<endl;
    }
    void operator [](int j)
    {
        cout<<p[j]<<endl;
    }
    void operator <(String k)
    {
        if((strlen(p)<strlen(k.p)) == 1)
        {
            cout<<"True"<<endl;

        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    void operator ==(String k)
    {
        if(strcmp(p,k.p) == 0)
        {
            cout<<"Both are equal"<<endl;
        }
        else
        {
            cout<<"Not equal"<<endl;
        }
    }
    void operator +(String k)
    {
       strcat(k.p,p);
       cout<<k.p;
    }
    
};

 
int main()
{
    String h;
    char k[30];
    char s[30];
    gets(s);
    h.getString(s);
    h[3];
    !h;
    String j;
    gets(k);

    j.getString(k);
    j<h;
    j==h;
    h+j;
    return 0;
}