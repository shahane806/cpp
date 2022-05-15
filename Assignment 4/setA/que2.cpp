/*
Write a C++ program to overload function volume and find volume of cube, cylinder and sphere
*/
#include<iostream>
#include<conio.h>
using namespace std;
// v = a *a*a;
// v = pie * r * r *h;
// v = 4/3 pie r * r * r;
int vol(int a)
{
    return a*a*a;
}
int vol(int pie,int r,int h)
{
    return pie*r*r*h;
}
int vol(int pie,int r)
{
    return (4/3)*pie*r*r*r;
}
int main()
{
    int res = vol(3);
    cout<<"The volume of cube is : "<<res<<endl;
    res = vol(3.14,3,4);
    cout<<"The volume of cylinder is : "<<res<<endl;
    res = vol(3.14,3);
    cout<<"The volume of sphere is : "<<res<<endl;
    return 0;
}