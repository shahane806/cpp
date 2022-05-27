/*
Write a C++ program to create a class Number which contains two integer data members. Create and 
initialize the object by using default
constructor, parameterize constructor. Write a member function to display maximum from given two 
numbers for all objects

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Number 
{
    private :
    int d1,d2;
    public : 
    Number()
    {
        d1 = 1;
        d2 = 0;
    }
    Number(int n,int n2)
    {
        d1 = n;
        d2 = n2;
    }
    void max()
    {
        if(d1>d2)

        {
            cout<<"d1 is max"<<endl;
        }
        else
        {
            cout<<"d2 is max"<<endl;
        }
    }
};

int main()
{
    Number n1,n2;
    cout<<"Maximum is "<<endl;
    n1.max();

    cout<<"By parameterized constructor"<<endl;
    n2 =  Number(3,4);
    n2.max();

    return 0;
}