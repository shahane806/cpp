/*
    Write a C++ program using class to calculate simple interest amount ( Use parameterize constructor
    with default value for rate)
*/

#include<iostream>
#include<conio.h>
using namespace std;
class si
{
    private :
    float rate,principle,year;
    public  : 
    si()
    {
        rate = 0;
        principle = 0;
        year = 0;
    }

    si( float  principle1 , float  year1, float rate1= 0.3 )
    {
        principle = principle1;
        year = year1;
        cout<<"SI : "<<(principle*year*rate1)/100<<endl;
    }
    

};
int main()
{
    si s;
    s = si(10000,2);
    

    return 0;
}