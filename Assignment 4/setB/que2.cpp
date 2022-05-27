/*
Write a C++ program to implement a class printdata to oveload print function as follows:
a. void print(int) - outputs value -<int>, that is ,value followed by the value of the integer.
eg. print(10) outputs value - <10>

b. Void print(char *) - outputs value - "char *", that is, value followed by the string in double quotes.
eg print("hi")
outputs value 'hi'

c. Void print(int n, char *) - display first n characters from the given string
eg. print(3, "object")- outputs value  - "obj"
*/

#include <iostream>
#include <string.h>

#include <conio.h>
using namespace std;
class printdata
{
private:
    int a;

public:
    void print(int);
    void print(char *);
    void print(int n, char *);
};
void printdata ::print(int a)
{
    cout << a << endl;
}
void printdata ::print(char *c)
{
    cout <<c<<endl;
}
void printdata ::print(int n, char *c)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << c[i];
    }
    cout<<endl;
}
int main()
{
    printdata t;
    t.print(1);
    t.print(3, "hello");
    t.print("hi");
    return 0;
}