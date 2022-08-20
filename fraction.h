/*
接口文件
*/

#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    private:
        int number;
        int denom;

    public:
        Fraction(int num, int den);
        Fraction();
        Fraction(const Fraction& fract);
        ~Fraction();

        int getNumer() const;
        int getDenom() const;
        void print() const;
        void setNumer(int num);
        void setDenom(int den);
    
    private:
        void normalize();
        int gcd(int n, int m);
};

#endif