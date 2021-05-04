#include "Rational.h"
#include <iostream>
using namespace std;
int main() {
    Rational x(3,4);
    Rational y(1,3);
    Rational z(10,12);
    Rational a(24,36);
    Rational b(-24,36);
    Rational c(24,-36);
    Rational d(-24,-36);
    Rational e(0,36);
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;
    cout<<" z = "<<z<<endl;
    cout<<" a = "<<a<<endl;
    cout<<" b = "<<b<<endl;
    cout<<" c = "<<c<<endl;
    cout<<" d = "<<d<<endl;
    cout<<" e = "<<e<<endl;

    cout<<"X+Y = " <<x+y<<endl;

    cout<<"X-Y = " <<x-y<<endl;

    cout<<"X*Y = " <<x*y<<endl;

    cout<<"X/Y = " <<x/y<<endl;


    cout<<"X == Y = " << x == y <<endl;

    cout<<" x = "<<x.toDouble()<<endl;

    return 0;
}
