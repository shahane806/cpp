/*

A book shop maintains the inventory of books that are being sold at the shop.
The list inclues details such as author_name, title, price, publisher, and stock position.
If customer wants to purchase a book he gives details of book along with the number of copies required.
If requested copies are available the total cost of requested copies is displayed;
Otherwise the message Required copies not in stock is displayed.
Design a system using a class called Bookship with suitable member functions and constructor
(Use new operator to allocate memory)
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
class bookship
{
private:
    char author_name[30];
    char title[30];
    float price;
    char publisher[30];
    int stock;

public:
    bookship()
    {
        strcpy(author_name, "name");
        strcpy(title, "title");
        strcpy(publisher, "publisher");
        price = 0;
        stock = 0;
    }
    void getData(void);
    void display(void);
    void check(char titl[30],int cpys);
    

};
void bookship :: check(char tit[30],int ncp)
{
    if(strcmp(title,tit) == 0)
    {
        int cst = 0;
        display();
        stock -=ncp;
        cst = ncp * price;
        cout<<"Purchase successfully"<<endl;
        cout<<"Total cost : "<<cst<<endl;
        display();

    }
    else if(stock == 0)
    {
        cout<<"Copies not available"<<endl;
    }
}
void bookship :: getData(void){
    cout<<"Enter Author Name : ";
    cin>>author_name;
    cout<<"Enter Book Title : ";
    cin>>title;
    cout<<"Enter Publisher : ";
    cin>>publisher;
    cout<<"Enter price : ";
    cin>>price;
    cout<<"Enter stock : ";
    cin>>stock;
}
void bookship :: display(void){
    cout<<"author_name : "<<author_name<<endl
        <<"title : "<<title<<endl
        <<"publisher : "<<publisher<<endl
        <<"price : "<<price<<endl
        <<"stock : "<<stock<<endl;
}
int main()
{
    bookship b[3];
    int i;
    char o;
    char tit[30];
    int ncp;
    for( i = 0 ; i < 3; i++)
    {
        b[i].getData();
        
    }
    for( i = 0 ; i < 3; i++)
    {
        b[i].display();

    }
    cout<<"you want to buy book"<<endl;
    cin>>o;
    if(o == 'y')
    {
       cout<<"Enter book title and number of copies"<<endl;
       cin>>tit>>ncp;
        for(i = 0;i<3;i++)
        {
            b[i].check(tit,ncp);
        }
    }
    else if(o == 'n')
    {
        exit(0);
    }
    else
    {
        cout<<"Invalid "<<endl;
    }
    return 0;
}