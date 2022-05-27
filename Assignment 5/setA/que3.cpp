/*
Write a C++ program to create a class Mobile which contains data members as Mobile_Id, Mobile_Name
, Mobile_Price. Create and initialize all value of Mobile object by using parameterized constructor. 
Display the values of Mobile object where Mobile_price should by right justified with a precision of two digits
*/
#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;
class Mobile
{
    private :
    int Mobile_Id;
    char Mobile_Name[30];
    float Mobile_Price;

    public  :
    Mobile()
    {
         Mobile_Id = 0;
        strcpy(Mobile_Name,"MobileName");
        Mobile_Price = 0;
    }
    Mobile(int MobileId,char MobileName[30], float MobilePrice) 
    {
        Mobile_Id = MobileId;
        strcpy(Mobile_Name,MobileName);
        Mobile_Price = MobilePrice;
    }
    void display(void)
    {
        cout<<setw(15)<<"Mobile Id : "<<Mobile_Id<<endl;
        cout<<setw(15)<<"Mobile Name : "<<Mobile_Name<<endl;
        cout<<setfill(' ')<<setw(15)<<setprecision(4)<<"Mobile Price : "<<Mobile_Price<<endl;
    }
};
int main()
{
    Mobile mob1,mob2,mob3;
    mob1 = Mobile(1,"Samsung",23.2043);
    mob1.display();
    mob2 = Mobile(2,"Samsung2",22.1034);
    mob2.display();
    mob3 = Mobile(3,"Samsung3",24.4034);
    mob3.display();

    
    return 0;
}