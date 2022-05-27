/*

Create a class Rational to represent a Rational number.
Perform the Basic Arithmetic Operations:
Addition, Subtraction, Multiplication and Division for two Rational Numbers.

*/
#include <iostream>
#include <conio.h>
using namespace std;
class Rational
{
private:
    float numerator, denominator;

public:
    void get(void)
    {
        cout << "Enter numerator : ";
        cin >> numerator;
        cout << "Enter denominator : ";
        cin >> denominator;
    }
    void put(void)
    {
        cout << "Numerator : " << numerator << endl
             << "Denominator : " << denominator << endl;
    }

    Rational operator+(Rational f)
    {
        Rational temp;

        temp.numerator = f.numerator;
        temp.denominator = f.denominator;

        f.numerator = f.numerator * denominator;
        f.denominator = f.denominator * denominator;
        denominator = denominator * temp.denominator;
        numerator = numerator * temp.denominator;

        temp.numerator = numerator + f.numerator;
        temp.denominator = denominator;

        return temp;
    }
    Rational operator-(Rational f)
    {
        Rational temp;

        temp.numerator = f.numerator;
        temp.denominator = f.denominator;

        f.numerator = f.numerator * denominator;
        f.denominator = f.denominator * denominator;
        denominator = denominator * temp.denominator;
        numerator = numerator * temp.denominator;

        temp.numerator = numerator - f.numerator;
        temp.denominator = denominator;

        return temp;
    }
    Rational operator*(Rational f)
    {
        Rational temp;

        temp.numerator = f.numerator * numerator;
        temp.denominator = f.denominator * denominator;

        return temp;
    }
    Rational operator /(Rational f)
    {
        Rational temp;
        temp.numerator = f.numerator * denominator;
        temp.denominator = f.denominator * numerator;
        return temp;
    }
};

int main()
{
    Rational r1, r2, r3, r4, r5, r6;
    r1.get();
    r1.put();
    r2.get();
    r2.put();
    r3 = r1 + r2;
    r3.put();
    r4 = r1 - r2;
    r4.put();
    r5 = r1 * r2;
    r5.put();
    r6 = r1 / r2;
    r6.put();
    return 0;
}