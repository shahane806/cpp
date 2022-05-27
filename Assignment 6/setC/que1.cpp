/*
Create a class fraction that contains two data members as numerator and denominator
Write a C++ program to overload following operators
++ Unary (pre and post both)
<< and >> Overload as friend functions
< Returns 1 if first fraction is less than second fraction

*/

#include<iostream>
#include<conio.h>
using namespace std;
class fraction
{
    private : 
    float numerator , denominator;
    public  :
    void get(void)
    {
        cout<<"Enter numerator : ";
        cin>>numerator;
        cout<<"Enter denominator : ";
        cin>>denominator;
    }
    void put(void)
    {
        cout<<"Numerator : "<<numerator<<endl
            <<"Denominator : "<<denominator<<endl;
    }
    void operator ++()
    {
        numerator++;
        denominator++;
    }
    void operator ++(int)
    {
        ++numerator;
        ++denominator;
    }
    void operator <(fraction f)
    {
        if((numerator/denominator)<(f.numerator/f.denominator))
        {
            cout<<"f1 is less";
        }
        else
        {
            cout<<"f2 is less";
        }
    }
};
int main()
{
    fraction f1,f2;
    f1.get();
    f1.put();
    f2.get();
    f2.put();
    f1<f2;
    return 0;
}