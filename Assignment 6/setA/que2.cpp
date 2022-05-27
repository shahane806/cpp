/*
Write a C++ program to create a class employee containing salary as a datamember. Write necessary
member functions to overload the operator unary pre and post decrement '--' for incrementing and
decrementind salary

*/
#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
    private : 
        int salary;
    public  : 
        employee()
        {
            salary = 100000;
        }
        void operator --(int)
        {
            cout<<"Post decrement"<<endl;
            cout<<salary<<endl;
            salary--;
        }
        void operator --()
        {
            cout<<"Pre decrement"<<endl;
            --salary;
            cout<<salary<<endl;
        }
};
int main()
{
    employee e;
    e--;
    --e;
    return 0;
}