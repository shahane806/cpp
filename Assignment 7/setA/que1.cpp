/*
Design a base class Item(Item_Id, Item_Name,Price).
Derive a class Discount(Discount_In_Percentage) from item.
A customer buys 'n' items. Calculate total price, total discount and display bill using
appropriate manipulators

*/
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class Item
{
    private :
        int Item_Id;
        char Item_Name[30];
        float price; 
    public  :
    void get()
    {
        cout<<"Enter id, name , price : "
        <<endl;
        cin>>Item_Id>>Item_Name>>price;
    }
    float pric()
    {
        return price;
    }
    int ItemId()
    {
        return Item_Id;
    }
    string ItemName()
    {
        return Item_Name;
    }

};
class Discount : public Item{
    private:
    int discount;
    float tot;
    public : 
    Discount()
    {
        discount = 0;
        tot = 0;
    }
    void totalPrice()
    {
        tot = tot+pric();
    }
    void totalDiscount()
    {
        discount = 10;
    }
    void displayBill()
    {
        cout<<setw(15)<<setfill(' ')<<"ItemName : "<<ItemName()<<endl;
        cout<<setw(15)<<setfill(' ')<<"ItemId : "<<ItemId()<<endl;
        cout<<setw(15)<<setfill(' ')<<"tot : "<<tot<<endl;
        cout<<setw(15)<<setfill(' ')<<"discount : "<<discount<<endl;
        cout<<setw(15)<<setfill(' ')<<"Total : "<<tot - (tot/100)*10<<endl;

    }
};
int main()
{
    Discount d,d1;
    d.get();
    d.totalPrice();
    d.totalDiscount();
    d.displayBill();
    return 0;
}