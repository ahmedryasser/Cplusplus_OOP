//
// Created by Ahmed Yasser on 2/18/2020.
//

#ifndef Rational_hpp
#define Rational_hpp

#include <stdio.h>
#include <iostream>
#include <cassert>
using namespace std;

class Rational{
private:
    int _numerator;  // these are called attributes.
    int _denominator;  // attributes are private. and belong to an object.

public:
    //  Rational();     // this is the default constructor. they are called methods.
    //  Rational(int numerator);
    //  Rational(int numerator, int denominator);

    Rational(int numerator=0, int denominator=1);
    int numerator() const;      //accessor method or a getter
    int denominator() const;
    double toDouble() const;    // return the floating point equivalent of the rational.
};



ostream &operator <<(ostream &lhs, const Rational &rhs);
Rational operator+ (const Rational &lhs, const Rational &rhs);
Rational operator- (const Rational &lhs, const Rational &rhs);
bool operator == (const Rational &lhs, const Rational &rhs);
Rational operator* (const Rational &lhs, const Rational &rhs);
Rational operator/ (const Rational &lhs, const Rational &rhs);
Rational operator- (const Rational &lhs, const Rational &rhs);
bool operator> (const Rational &lhs, const Rational &rhs);
int gcd(int m, int n);      // returns the greatest common devisor of m and n.
int sign(int n); // returns 1 for positives, -1 for negatives and 0 for 0.
int abs(int n); // returns absolute value on n.


#endif
