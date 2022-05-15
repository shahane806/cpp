/*
Write a C++ program for finding area of right angled triangle, isosceles triangle and equilateral triangle using function overloading concept
*/

//area of right angle triangle is 1/2 * a * a 
//area of isoscele triangle is 1/2 base * height
//area of equilaterial triangle is 1.7 * side * side;
#include<iostream>
#include<conio.h>
using namespace std;
void area( int a)
{
    cout<< 0.5*a*a<<endl;
}
void area(int base,int height)
{
    cout<< 0.5*base*height<<endl;
}
void area(float side)
{
    cout<< 1.7*side*side<<endl;
}

int main()
{
    int a,base,height;
    float side;

    cout<<"Enter a"<<endl;
    cin>>a;
    area(a);
    cout<<"Enter base and height"<<endl;
    cin>>base>>height;
    area(base,height);
    cout<<"Enter side"<<endl;
    cin>>side;
    area(side);
    return 0;
}