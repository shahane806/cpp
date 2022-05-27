/*
Write a C++ program to create a class which contains single dimensional integer array of given size.
Define member function to display median of a given arrray (Use Dynamic Constructor to allocate and Destructor to 
free memory of an object)

*/
#include<iostream>
#include<conio.h>
using namespace std;
class i
{
    private :
    int *a;
    public  : 
    
    i()
    {
        a = new int [5]{1,2,3,4,5};
    }
    ~i(){cout<<"Destruct memory"<<endl;};
    int median()
    {
        return a[5/2];
    }
};
int main()
{
    i i1;
    int median;
    median = i1.median();
    cout<<"The median is :"<<median<<endl;
    cout<<"Destruct the memory used by constructor i"<<endl;
    
    return 0;
}