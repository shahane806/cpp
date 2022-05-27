/*
Write a C++ program to create a class Number . Write necessary member functions to overload the
operator unary pre and post increment '++' for an integer number

*/
#include <iostream>
#include <conio.h>
using namespace std;
class Number
{
private:
    int num;

public:
    void get(void)
    {
        cout << "Enter number";
        cin >> num;
    }
    void display(void)
    {
        cout << num;
    }
    void operator ++()
    {
        cout << "post increment" << endl;
        num++;
    }
    void operator ++(int)
    {
        cout << "pre increment" << endl;
        ++num;
    }
};
int main()
{
    Number n;
    n.get();
    n++;
    n.display();
    ++n;
    n.display();

    return 0;
}