/*
Write a C++ program to implement function overloading in order to compute power(m,n) where 
a. m is double and n is int
b. m and n are int
*/
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int power(double m, int n)
{
    int pow1;

    pow1 = pow(m,n);
    return pow1;
}
int power(int m,int n)
{
    int pow1;
    pow1 = pow(m,n);
    return pow1;
}
int main()
{
    
    int pow = power(3,4);
    cout<<pow<<endl;
    pow = power(double(34),3);
    cout<<pow;
    return 0;
}