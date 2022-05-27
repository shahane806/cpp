/*
Write a c++ program to implement a class student to overload following functions as follows :
int maximum(int,int) - returns the maximum score of two students
int maximum(int * a, int arraylength) - returns the maximum score from an array 'a'
void maximum(int * a, int arraylength, int n) - display all students from the array 'a'
having value greather than n
*/

#include<iostream>
#include<conio.h>
using namespace std;
class student{
    private : 
    public  :
   
    int maximum(int,int);
    int maximum(int *a,int arraylength);
    void maximum(int *a, int arraylength, int n);

};

int student :: maximum(int a ,int b)
{
    cout<<"Return Maximum of a and b"<<endl;
    return (a>b)?  a :  b;
    
}
int student :: maximum(int * a, int arraylength)
{
    cout<<"Maximum in array"<<endl;
    a = new int[arraylength];

    int i = 0;
    int max = 0;
    cout<<"Enter values : ";
    for(i = 0;i<arraylength;i++)
    {
        cin>>a[i];
    }
    for(i = 0 ;i<arraylength;i++)
    {
        if(a[i]<a[i+1])
        {
            max = a[i+1];
        }
    }
    delete a;
    return max;
}
void student :: maximum(int * a, int arraylength, int n)
{
    a = new int[arraylength];
    int i = 0;
    cout<<"Enter values : ";
    for(i = 0;i<arraylength;i++)
    {
        cin>>a[i];
    }
    for(i = 0;i<arraylength;i++)
    {
        if(a[i]>n)
            cout<<a[i]<<endl;
    }
    delete a;
}
int main()
{
    student s[2];
    int * a;
    cout<<s[1].maximum(a,3)<<endl;
    s[1].maximum(a,3,1);
    cout<<s[0].maximum(a,3)<<endl;
    s[0].maximum(a,3,1);
    return 0;
}