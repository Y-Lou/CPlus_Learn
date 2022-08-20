/*
程序文件
*/
#include "fraction.h"
#include <iostream>
using namespace std;

int main()
{
    Fraction fract1;
    Fraction fract2(14,21);
    Fraction fract3(11,-8);
    Fraction fract4(fract3);

    cout << "Printing four fractions after constructed " << endl;
    cout << "fract1: ";
    fract1.print();
    cout << "fract2: ";
    fract2.print();
    cout << "fract3: ";
    fract3.print();
    cout << "fract4: ";
    fract4.print();

    cout << "Changing the first two fractions and printing them: " << endl;
    fract1.setNumer(4);
    cout << "fract1: ";
    fract1.print();
    fract2.setDenom(-5);
    cout << "fract2: ";
    fract2.print();
    cout << "Testing the changes in two fraction: " << endl;
    cout << "fract1 numerator: " << fract1.getNumer() << endl;
    cout << "fract2 denomator: " << fract2.getDenom() << endl; 
}