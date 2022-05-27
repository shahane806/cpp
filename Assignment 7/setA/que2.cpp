/*
    Design a two base classes Employee(Name, Designation) and Project(Project_Id,title).
    Derive a class Emp_Proj(Duration) from Employee and Project. Write a menu drive program to 
    a. Build a master table
    b. Display a master table
    c. Display Project details in the ascending order of duration
    
*/
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class Employee
{
    protected : 
    char Name[30],Designation[30];
    public  : 
    void getEmployee(void);
    void displayEmployee(void);
};
void Employee :: getEmployee(void)
{
    cout<<"Enter Employee Name : ";
    cin>>Name;
    cout<<"Enter Designation : ";
    cin>>Designation;
}
void Employee :: displayEmployee(void)
{
    cout<<setw(15)<<setfill(' ')<<"Name : "<<Name<<endl;
    cout<<setw(15)<<setfill(' ')<<"Designation : "<<Designation<<endl;
}
class Project
{
    protected : 
    int Project_Id;
    char title[30];
    
    public  : 
    void getProject(void);
    void displayProject(void);

};
void Project :: getProject(void)
{
    cout<<"Enter project Id : ";
    cin>>Project_Id;
    cout<<"Enter project title : ";
    cin>>title;
}
void Project :: displayProject(void)
{
    cout<<setw(15)<<setfill(' ')<<"Project Id : "<<Project_Id<<endl;
    cout<<setw(15)<<setfill(' ')<<"Project Title : "<<title<<endl;
}
class Emp_Proj : public Employee , public Project
{
    private : 
    int Duration;
    public  :
    void getDur(void);
    void BuildMasterTable(void);
    void displayMasterTable(void);
    void InAsc(Emp_Proj [3]);

};
void Emp_Proj :: getDur(void){
    cout<<"Enter Duration : ";
    cin>>Duration;
}
void Emp_Proj :: BuildMasterTable(void)
{
    getEmployee();
    getProject();
    getDur();
}
void Emp_Proj :: displayMasterTable(void)
{
    cout<<endl;
    cout<<setw(15)<<setfill(' ')<<Name
    <<setw(15)<<setfill(' ')<<Designation
    <<setw(15)<<setfill(' ')<<Project_Id
    <<setw(15)<<setfill(' ')<<title
    <<setw(15)<<setfill(' ')<<Duration<<endl;
    cout<<endl;


}
void Emp_Proj :: InAsc(Emp_Proj a[3])
{
    int i,j;
    for(i = 0;i<3;i++)
    {
        for(j = 0;j<3;j++)
        {
            if(a[i].Project_Id<a[j].Project_Id)
            {
                Emp_Proj temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for ( i = 0; i < 3; i++)
    {
        a[i].displayMasterTable();
    }
    
}
int main()
{
    Emp_Proj emp[3];
    int i;
    for(i = 0;i<3;i++)
    {
        emp[i].BuildMasterTable();
    }

     cout<<setw(15)<<setfill(' ')<<"Name"
    <<setw(15)<<setfill(' ')<<"Designation"
    <<setw(15)<<setfill(' ')<<"Project Id"
    <<setw(15)<<setfill(' ')<<"Project Title"
    <<setw(18)<<setfill(' ')<<"Project Duration"<<endl;
    for(i = 0;i<3;i++)
    {
        emp[i].displayMasterTable();
    }

       cout<<setw(15)<<setfill(' ')<<"Name"
    <<setw(15)<<setfill(' ')<<"Designation"
    <<setw(15)<<setfill(' ')<<"Project Id"
    <<setw(15)<<setfill(' ')<<"Project Title"
    <<setw(18)<<setfill(' ')<<"Project Duration"<<endl;
    emp[0].InAsc(emp);
    return 0;
}