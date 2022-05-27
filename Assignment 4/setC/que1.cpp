/*

    Write a C++ program to create a class article having articleid, name ,articleqty, price. 
    Write menu driven program to perform following functions
    a. Accept details of n articles
    b. Display details of all articles purchased
    c. Display details of articles whose price exceeds 500
    d. Display details of articles whose quality exceeds 50
*/

#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
class article
{
private:
    int articleid;
    char name[30];
    int articleqty;
    float price;

public:
    article()
    {
        articleid = 0;  
        strcpy(name,"def");
        articleqty = 0;
        price = 0;
    }
    void get(void);
    void put(void);
    void priced(article a[], int);
    void qtyd(article a[], int);
};

void article ::priced(article a[], int n)
{
    int i;
    cout << "The max price article is :::::::::::" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i].price > 500)
        {
            a[i].put();
            break;
        }
        else
        {
            cout << "no result found" << endl;
        }
    }
}

void article ::qtyd(article a[], int n)
{
    int i;
    cout << "The max quantity article is :::::::::::" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i].articleqty > 500)
        {
            a[i].put();
            break;
        }
        else
        {
            cout << "no result found" << endl;
        }
    }
}
void article ::get(void)
{
    cout << "Enter article id : ";
    cin >> articleid;
    cout << "Enter article name : ";
    cin >> name;
    cout << "Enter article quantity :";
    cin >> articleqty;
    cout << "Enter article price :";
    cin >> price;
}
void article ::put(void)
{
    cout << "Article id : "
         << articleid << endl
         << "Name : "
         << name << endl
         << "Quantity : "
         << articleqty << endl
         << "Price : "
         << price << endl;
}
int main()
{
    article a[30], pri[30];
    int i, n, op;
    cout << "1. Create Entries of article details " << endl
         << "2. Display All Entries " << endl
         << "3. Display Article exceed 500 price" << endl
         << "4. Display Article exceed 50 quantyty" << endl
         << "5. exit" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
    {
        cout << "Enter how many article details you want to enter : ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            a[i].get();
        }
    }
    break;

    case 2:
    {
        cout << "Article Details : " << endl;
        for (i = 0; i < n; i++)
        {
            a[i].put();
        }
    }
    break;
    case 3:
    {
        a[0].priced(a, n);
    }
    break;
    case 4:
    {

        a[0].qtyd(a, n);
    }
    break;
    case 5:
        exit(0);

    default:
        cout << "Invalid input" << endl;
        break;
    }

    return 0;
}