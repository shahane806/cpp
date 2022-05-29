/*
    Create a base class Account(Acc_Holder_Name, Acc_Holder_Contact_No).
    Derive two classes as Saving_Account(S_Acc_No, Balance) and Current_Account(C_Acc_No,Balance)
    from Account. The savings account privides interese and withdrawal facility. The current account
    provides no interese facility. Saving account maintains a minimum balance of 2000 and if the
    balance falls below this level, a service charge of Rs 500 is imposed. Current account maintains
    a minium balance of 5000 and if the balance falls below this level, a service charge of
    rs 1000 is imposed
    Write a C++ program menu dirven to perform the follwoing funcitons:
    a. Accepting amount and deposit it into account
    b. withdrawing amoutn rom account
    c. Calculating interese and service charge where intereset rate for saving account is 10%
    of balance
    d. Displaying information of account
*/

#include <iostream>
#include <conio.h>
using namespace std;
class Account
{
protected:
    char acHoldName[30];
    long int AccHoldContact;

public:
    void get()
    {
        cout << "Enter Account holder Name  : ";
        cin >> acHoldName;
        cout << "Enter Account holder Contact : ";
        cin >> AccHoldContact;
    }
};
class Saving : virtual public Account
{
protected:
    int S_Acc_No, Balance;
    int interest, withdrawal;

public:
    Saving()
    {
        interest = 3;
        S_Acc_No = 0;
        Balance = 0;
        withdrawal = 0;
    }
    void getSev()
    {
        cout << "Enter S/ac no : ";
        cin >> S_Acc_No;
        cout << "Enter Amount : ";
        cin >> Balance;
    }
    void withdraw()
    {
        cout << "Enter Amount : ";
        cin >> withdrawal;
        Balance = Balance - withdrawal;
    }
    void interestApply()
    {
        if(Balance < 2000)
        {
            Balance = Balance - 500;
        }
        Balance = Balance + (Balance / 100) * 10;

    }
    void display()
    {
        cout << "Account Holder Name : " << acHoldName << endl;
        cout << "Account type : "
             << "Saving" << endl;
        cout << "Account Balance : " << Balance << endl;
    }
};
class Current_Account : virtual public Account
{
protected:
    int C_Acc_No, Balance, withdrawal;

public:
    Current_Account()
    {
        C_Acc_No = 0;
        Balance = 0;
        withdrawal = 0;
    }
    void getdet()
    {
        cout << "Enter current Ac No : ";
        cin >> C_Acc_No;
        cout << "Enter Balance : ";
        cin >> Balance;
    }
    void withdraw()
    {
        cout << "Enter Amount : ";
        cin >> withdrawal;
        Balance = Balance - withdrawal;
    }
     void display()
    {
        cout << "Account Holder Name : " << acHoldName << endl;
        cout << "Account type : "
             << "Saving" << endl;
        cout << "Account Balance : " << Balance << endl;
    }
};
int main()
{
    Current_Account k;
    Saving s;
    int n;
    int type;
    cout<<"Enter 1 for saving account"<<endl;
    cout<<"Enter 2 for Current account"<<endl;
    cin>>type;
  
  switch (type)
  {
  case 1:
      {
 while (n != 5)
    {
  cout << "a. Accepting amount and deposit it into account" << endl
         << "b. withdrawing amoutn rom account" << endl
         << "c. Calculating interese and service charge where intereset rate for saving account is 10% of balance" << endl
         << "d. Displaying information of account" << endl
         << "e. Exit" << endl;
    cin >> n;
        switch (n)
        {
        case 1:
        {

            s.get();
            s.getSev();
        }
        break;
        case 2:
        {

            cout << "Withdraw amount from account : " << endl;
            s.withdraw();
        }

        break;
        case 3:
            {
                cout<<"Interest and service charge : "<<endl;
                s.interestApply();
            }
            break;
        case 4:
            s.display();
            break;

        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
      }
      break;
  case 2:
      {
 while (n != 5)
    {
  cout << "a. Accepting amount and deposit it into account" << endl
         << "b. withdrawing amoutn rom account" << endl
         << "c. Displaying information of account" << endl
         << "d. Exit" << endl;
    cin >> n;
        switch (n)
        {
        case 1:
        {

            k.get();
            k.getdet();
        }
        break;
        case 2:
        {

            cout << "Withdraw amount from account : " << endl;
            k.withdraw();
        }

        break;
      
        case 3:
            k.display();
            break;

        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
      }
      break;
  
  default:
     cout<<"invalid input";
      break;
  }
   
    return 0;
}
