/*
    Create a Base class Flight containing protected data members as Flight_no, Flight_Name.
    Derive a class Route(source, Destination) from class Flight. Also derive a class
    Reservation(Number_Of_Seats, Class, Fare, Travel_Date) from Route. Write a C++
    program to perform following necessary functions :
    a. Enter details of 'n' reservations
    b. Display details of all reservations
    c. Display reservation details of Business class

*/

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Flight
{
protected:
    int Flight_no;
    char flightName[30];

public:
    void getData(void)
    {
        cout << "Enter Flight NO : ";
        cin >> Flight_no;
        cout << "Enter Flight Name : ";
        cin >> flightName;
    }
    void putData(void)
    {
        cout << "Flight No : " << Flight_no << endl
             << "Flight Name : " << flightName << endl;
    }
};

class Route : public Flight
{
protected:
    char source[30];
    char destination[30];

public:
    void getR(void)
    {
        cout << "Enter source :";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
    }
    void putR(void)
    {
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
    }
};
class Reserved : public Route
{
private:
    int noOfSeats;
    char class1[30];
    float fare;
    char date[30];

public:
    void getRes(void)
    {
        cout << "Enter no of seats : ";
        cin >> noOfSeats;
        cout << "Enter Class : ";
        cin >> class1;
        cout << "Enter Fare  : ";
        cin >> fare;
        cout << "Enter Date  : ";
        cin >> date;
    }
    void purRes(void)
    {
        cout << endl;
        cout << "No of Seats : " << noOfSeats << endl
             << "Class : " << class1 << endl
             << "Fare  : " << fare << endl
             << "Date  : " << date << endl;
    }
    void displayBusiness(Reserved r[3], char *c)
    {
        cout << endl;
        int i;
        for (i = 0; i < 3; i++)
        {
            if (strcmp(r[i].class1, c) == 0)
            {
                r[i].putData();
                r[i].putR();
                r[i].purRes();
            }
        }
    }
};
int main()
{
    Reserved r[3];
    int n;
    int i;
    for (i = 0; i < 3; i++)
    {
        r[i].getData();
        r[i].getR();
        r[i].getRes();
    }
    cout << "How many record you want to see" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {

        r[i].putData();
        r[i].putR();
        r[i].purRes();
    }
    cout << "Display All Records :" << endl;
    for (i = 0; i < 3; i++)
    {
        r[i].putData();
        r[i].putR();
        r[i].purRes();
    }
    cout << "All Record Display of Business Class" << endl;
    r[0].displayBusiness(r, "business");
    return 0;
}
