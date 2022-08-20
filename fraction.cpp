/*
实现文件
*/

#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int num, int den = 1):number(num),denom(den)
{
    normalize();
}

Fraction::Fraction():number(0),denom(1)
{

}

Fraction::Fraction(const Fraction& fract):number(fract.number),denom(fract.denom)
{

}

Fraction::~Fraction()
{

}

int Fraction::getNumer() const
{
    return number;
}

int Fraction::getDenom() const
{
    return denom;
}

void Fraction::print() const
{
    cout << number << "/" << denom << endl;
}

void Fraction::setNumer(int num)
{
    number = num;
    normalize();
}

void Fraction::setDenom(int den)
{
    denom = den;
    normalize();
}

void Fraction::normalize()
{
    if (denom == 0)
    {
        cout << "Invalid denomination. Need to quit." << endl;
        assert(false);
    }

    if (denom < 0)
    {
        denom = -denom;
        number = -number;
    }

    int divisor = gcd(abs(number),abs(denom));
    number = number/divisor;
    denom = denom/divisor;
}

int Fraction::gcd(int n, int m)
{
    int gcd = 1;
    for(int k=1;k<=n && k<=m;k++)
    {
        if(n%k == 0 && m%k == 0)
        {
            gcd = k;
        }
    }
    return gcd;
}