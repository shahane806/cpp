/*
    Create a class Matrix and write a C++ program to perform following functions : 
    a. To accept a Matrix
    b. To display a Matrix
    c. Overload unary minus '-' operator to calculate transpose of Matrix
    d. Overload binary multiplication '*' operator to calculate multiplication of two matrices
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Matrix
{
    private:
    int a[2][2];
    public : 
    void get()
    {
        int i,j;
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                cin>>a[i][j];
            }
            
        }
        
    }
    void put()
    {
           int i,j;
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    }
    
   
    void operator -()
    {
         int i,j;
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
            
        }
    }
    void operator *(Matrix t)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<t.a[i][j]*a[i][j]<<" ";
            }
            cout<<endl;
        }
        
     

    }
};

int main()
{
    Matrix m;
    m.get();
    m.put();
    -m;
    Matrix m1,m2;
    m1.get();
    m2.get();
    m1.put();
    m2.put();
    m2*m1;
    return 0;
}