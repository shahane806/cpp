/*


Write a C++ program to create a class Worker that has data members as Worker_Name, No_of_Days_worked, Pay_Rate.
Create and initialize the object using default constructor, parameterized constructor and copy constructor.
Also write necessary member function to calculate and display the salary of worker

*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
class worker
{
private:
    char Worker_Name[30];
    int No_of_Days_worked;
    float Pay_Rate;

public:
    worker()
    {
        strcpy(Worker_Name, "Name");
        No_of_Days_worked = 0;
        Pay_Rate = 0.0;
    }
    worker(char w[30], int d, int r)
    {
        cout<<"copy constructor"<<w<<endl;
        strcpy(Worker_Name, w);
        No_of_Days_worked = d;
        Pay_Rate = r;
    }
    void display(void)
    {
        cout<<Worker_Name<<endl;
        cout<<No_of_Days_worked<<endl;
        cout<<Pay_Rate<<endl;
    }
    float calculateSalary()
    {
        cout<<"Employee : "<<Worker_Name<<endl;
        return No_of_Days_worked*Pay_Rate;
    }
};
int main()
{
    worker om,harry,thirdperson;
    float salary;
    char o[30] = "om";
    char h[30] = "harry";
    om = worker(o,365,1000);
    thirdperson = om;
    harry = worker(h,365,1000);
    om.display();
    harry.display();
    thirdperson.display();
   
    salary = om.calculateSalary(); 
    cout<<"Salary : "<<salary<<endl;
    salary = harry.calculateSalary(); 
    cout<<"Salary : "<<salary<<endl;
    salary = thirdperson.calculateSalary(); 
    cout<<"Salary : "<<salary<<endl;
    
    return 0;
}