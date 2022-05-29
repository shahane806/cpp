/*
    Create a base class Person(p_code,P_Name).Derive two classes Account(Ac_No., Balance)
    and Official(Designation,Experience) from person. further derive another class employee from
    both account and official classses. ( Use concept of virtual base class)
    Write a C++ menu driven program to perform the following funcitons
    a. Build a master table for 'n' employeees
    b. Display a master table of 'n' employees
    c. Display employees whose designation is HOD
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class person
{
protected:
    int pcode;
    char pname[30];

public:
    void get()
    {
        cout << "Enter pcode : ";
        cin >> pcode;
        cout << "Enter Pname : ";
        cin >> pname;
    }
};
class Account : public person
{
protected:
    int acno;
    int balance;

public:
    void getb()
    {
        cout << "Enter account no. : ";
        cin >> acno;
        cout << "Enter balance : ";
        cin >> balance;
    }
};
class Official : public person
{
protected:
    char designation[30];
    int exp;
    void getoff()
    {
        cout << "Enter Designation : ";
        cin >> designation;
        cout << "Enter experience : ";
        cin >> exp;
    }
};
class employee : virtual public Account, virtual public Official
{
private:
    char empname[30];
    char salary;

public:
    void getemp()
    {
        cout << "Enter employee name : ";
        cin >> empname;
        cout << "Enter salary : ";
        cin >> salary;
    }
    void mastertable(void)
    {
        Account ::get();
        getb();
        getoff();
        getemp();
    }
    void displayMasterTable(void)
    {
        cout << setw(15) << setfill(' ') << empname;
        cout << setw(15) << setfill(' ') << salary;
        cout << setw(15) << setfill(' ') << designation;
        cout << setw(15) << setfill(' ') << exp;
        cout << setw(15) << setfill(' ') << acno;
        cout << setw(15) << setfill(' ') << balance;
        cout << setw(15) << setfill(' ') << Account ::pcode;
        cout << setw(15) << setfill(' ') << Account ::pname << endl;
    }
    void chk(void)
    {
        if (designation == "HOD")
        {
            cout << setw(15) << setfill(' ') << empname;
            cout << setw(15) << setfill(' ') << salary;
            cout << setw(15) << setfill(' ') << designation;
            cout << setw(15) << setfill(' ') << exp;
            cout << setw(15) << setfill(' ') << acno;
            cout << setw(15) << setfill(' ') << balance;
            cout << setw(15) << setfill(' ') << Account ::pcode;
            cout << setw(15) << setfill(' ') << Account ::pname << endl;
        }
    }
};
int main()
{
    employee e[10];
    int n, i;
    cout << "How many employee you want to enter : ";
    cin >> n;
   
    for (i = 0; i < n; i++)
    {
        e[i].mastertable();
    }
    cout << "How many employee you want to display : ";

    cin >> n;
     cout << setw(15) << setfill(' ') << "Emp Name";
            cout << setw(15) << setfill(' ') << "Salary";
            cout << setw(15) << setfill(' ') << "designation";
            cout << setw(15) << setfill(' ') << "exp";
            cout << setw(15) << setfill(' ') << "acno";
            cout << setw(15) << setfill(' ') << "balance";
            cout << setw(15) << setfill(' ') << "pcode";
            cout << setw(15) << setfill(' ') << "pname" << endl;
    for (i = 0; i < n; i++)
    {
        e[i].displayMasterTable();
    }
    cout << "Employee Having designation as HOD" << endl;
     cout << setw(15) << setfill(' ') << "Emp Name";
            cout << setw(15) << setfill(' ') << "Salary";
            cout << setw(15) << setfill(' ') << "designation";
            cout << setw(15) << setfill(' ') << "exp";
            cout << setw(15) << setfill(' ') << "acno";
            cout << setw(15) << setfill(' ') << "balance";
            cout << setw(15) << setfill(' ') << "pcode";
            cout << setw(15) << setfill(' ') << "pname" << endl;
    for (i = 0; i < n; i++)
    {

        e[i].chk();
    }

    return 0;
}
