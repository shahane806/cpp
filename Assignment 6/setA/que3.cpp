/*
    Write a C++ program to create a class Array that contans one float array as member.
    Overload the Unary ++ and -- operators to increase or decrease the value of each element of 
    an array. Using friend function for operator function
    
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
    private:
    int i;
    float *array;
    public : 
    Array()
    {
        i = 0;
        array= new float[5]{1,2,3,4,5};
    }
    void operator ++(int)
    {
        
        cout<<array[i++];
    }
    void operator --(int)
    {
        
        cout<<array[i--];
    }
};
int main()
{
    Array a;
    a++;
    a--;
    a--;
    return 0;
}