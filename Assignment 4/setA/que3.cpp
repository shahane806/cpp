/*

Write a C++ program to overload calculate function do determine simple interest by using default arguments as 
follows
int calculate(int p, int n, int r=5) - Returns the SI by specifying rate of interest  = 5
int calculate(int p, int n = 10, int r = 7) - Returns SI by specifying no of years and rate of interest

*/
#include<iostream>
#include<conio.h>
using namespace std;
int calculate(int p,int n,int r=5)
{
    int si;
    si = (p*n*r)/100;
    return si;
}
int calculate(float p,int n=10,int r=7)
{
    int si;
    si = (p*n*r)/100;
    return si;
}
int main()
{
    float p;
    int n,r;
    int si;
    cout<<"Enter p and n"<<endl;
    cin>>p>>n;
    si = calculate(p,n);
    cout<<si;
    cout<<"Enter p"<<endl;
    cin>>p;
    si = calculate(p);
    cout<<si;
    return 0;
}