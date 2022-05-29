/*
    Create a base class Student(Roll_No, Name) which derives two classes Theory and Prictical.
    Theory class contains marks of five subjects and practical class contains marks of two practical
    subjects. Class Result(Total_Marks, class) inherits both theory and practical classes.
    Use concept of virtual base class
    a. Build a master table
    b. Display a master table
    c. Calculate Total_marks and class obtained

*/
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class Student
{
protected:
    int RollNo;
    char name[30];

public:
    void get(void)
    {
        cout << "Enter Roll no and name :";
        cin >> RollNo >> name;
    }
};
class Theory : public Student
{
protected:
    int sub[5];

public:
    void gett(void)
    {
        cout << "Enter subjects marks" << endl;
        int i;
        for (i = 0; i < 5; i++)
        {
            cin >> sub[i];
        }
    }
};
class Practical : public Student
{
protected:
    int prac[2];

public:
    void getpract(void)
    {
        cout << "Enter practical marks" << endl;
        int i;
        for (i = 0; i < 2; i++)
        {
            cin >> prac[i];
        }
    }
};
class Result : public Theory, public Practical
{
private:
    int totalMarks;
    char class1;
    int submarks;
    int pracmarks;

public:
    void getres(void)
    {
       Theory::get();
        totalMarks = 0;
        int i;
        for (i = 0; i < 5; i++)
        {
            totalMarks = sub[i] + totalMarks;
        }
       submarks = totalMarks;
        for (i = 0; i < 2; i++)
        {
            totalMarks = prac[i] + totalMarks;
        }
    pracmarks = totalMarks;
        if (totalMarks <= 400)
        {
            class1 = 'A';
        }
        else if (totalMarks <= 600)
        {
            class1 = 'o';
        }
    }
    void MasterResult(void)
    {
        cout << setw(15) << setfill(' ') << Theory::name
             << setw(15) << setfill(' ') << Theory::RollNo
             << setw(15) << setfill(' ') << submarks
             << setw(15) << setfill(' ') << pracmarks
             << setw(15) << setfill(' ') << totalMarks
             << setw(15) << setfill(' ') << class1<<endl;

            

             
}
}
;
int main()
{
    Result r[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        r[i].getpract();
        r[i].gett();
        r[i].getres();
    }

    cout << setw(15) << setfill(' ') << "Name"
         << setw(15) << setfill(' ') << "Roll NO"
         << setw(15) << setfill(' ') << "Sub Marks"
         << setw(17) << setfill(' ') << "Practical Marks"
         << setw(15) << setfill(' ') << "Total Marks "
         << setw(15) << setfill(' ') << "Class" << endl;

    for (i = 0; i < 5; i++)
    {
        r[i].MasterResult();
    }
    return 0;
}
