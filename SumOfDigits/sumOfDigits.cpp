#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;
int sumOfDigits(int n){
    assert(n>=0);
    if (n == 0){
        return 0;
    }
    int pow = log10(n);
    int num = n%10;
    n=n/10;
    int fnum = sumOfDigits(n)+ num;
    return fnum;
}
int main() {
    cout << sumOfDigits(1234);
    return 0;
}
