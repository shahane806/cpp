/*
Write a C++ program to create a class Person that contains data members as Person_Name, City, Mob_No. Write
a C++ program to perform following functions:

a. To accept and display Person information
b. To search the mobile number of given person
C. To search ther Person details of a given movile number
(use function overloading)
*/
#include<iostream>
#include<string.h>

#include<conio.h>
using namespace std;

class Person
{
    private :
        char   person_Name[30],city[30],mob[11]; 
    public : 
        void getData(void);
        void display(void);
        void search(char name[30]);
        void search(char mobil[11],int temp);

};
void Person :: search(char name[30])
{
    if(strcmp(person_Name,name) == 0)
    {
        cout<<"Mobile : "<<mob<<endl;
    }
}
void Person :: search(char mobil[11],int temp)
{
    if(strcmp(mob,mobil) == temp)
    {
        cout<<"Name : "<<person_Name<<endl;
        cout<<"City : "<<city<<endl;
    }
}

void Person::getData(void)
{
    cout<<"Enter Person Name : "<<endl;
    cin>>person_Name;
    cout<<"Enter City : "<<endl;
    cin>>city;
    cout<<"Enter mobile "<<endl;
    cin>>mob;
}
void Person :: display(void)

{
    cout<<"Name : "<<person_Name<<endl;
    cout<<"City : "<<city<<endl;
    cout<<"Mobile : "<<mob<<endl;
}
int main()
{
    Person  p[5];
    int i;
    char name[30];
    char mobile[11];
    int n;
    cout<<"How many person details you want to enter"<<endl;
    cin>>n;
    for(i = 0;i<n;i++)
    {
        p[i].getData();
    }
    
    for(i = 0;i<n;i++)
    {
        p[i].display();
    }

    cout<<"Enter name"<<endl;
    cin>>name;
    for(i = 0;i<n;i++)
    {
        p[i].search(name);
    }
    

    cout<<"Enter mobile"<<endl;
    cin>>mobile;
    for(i = 0;i<n;i++)
    {
        p[i].search(mobile,0);
    }










    return 0;
}