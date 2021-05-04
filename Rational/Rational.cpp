#include "Rational.h"


/*Rational:: Rational(){
    _numerator = 0;
    _denominator = 1;
}

Rational:: Rational(int numerator){
    _numerator = numerator;
    _denominator = 1;
}

Rational:: Rational(int numerator,int denominator){
    _numerator = numerator;
    _denominator = denominator;
}
 Rational_hpp
*/

Rational::Rational(int numerator, int denominator){
    assert(denominator!=0);
    int divisor = gcd(numerator, denominator);
    int multiplier = sign(numerator*denominator);
    _numerator=abs(numerator/divisor)*multiplier;
    _denominator= abs(denominator/divisor);
}

int Rational::numerator()const{
    return _numerator;
}


int Rational::denominator()const{
    return _denominator;
}




double Rational::toDouble()const{

    return numerator()*1.0 / denominator();

}

ostream &operator <<(ostream &lhs, const Rational &rhs){
    if(rhs.denominator() ==1){
        lhs<<rhs.numerator();
    }else{
        lhs << rhs.numerator()<<"/"<<rhs.denominator();
    }
    return lhs;

}
Rational operator +(const Rational &lhs, const Rational &rhs){
    int num = lhs.numerator()*rhs.denominator()+lhs.denominator()*rhs.numerator();
    int denom = lhs.denominator()*rhs.denominator();

    Rational answer(num,denom);
    return answer;
}
Rational operator -(const Rational &lhs, const Rational &rhs){
    int num = lhs.numerator()*rhs.denominator()-lhs.denominator()*rhs.numerator();
    int denom = lhs.denominator()*rhs.denominator();

    Rational answer(num,denom);
    return answer;
}
Rational operator *(const Rational &lhs, const Rational &rhs){
    int num = lhs.numerator()*rhs.numerator();
    int denom = lhs.denominator()*rhs.denominator();

    Rational answer(num,denom);
    return answer;
}
Rational operator /(const Rational &lhs, const Rational &rhs){
    int num = lhs.numerator()*rhs.denominator();
    int denom = lhs.denominator()*rhs.numerator();

    Rational answer(num,denom);
    return answer;
}

int gcd(int m, int n){
    if(m%n==0){
        return n;
    }
    else{
        return gcd(n,m%n);
    }
}
int sign(int n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return 1;
    }
}
int abs(int n){
    return n*(n<0? -1:1);
}
bool operator ==(const Rational &lhs, const Rational &rhs){
    return ((lhs.numerator() == rhs.numerator()) && (lhs.denominator() == rhs.denominator());
}
bool operator >(const Rational &lhs, const Rational &rhs){
    return lhs.toDouble() > rhs.toDouble();
}