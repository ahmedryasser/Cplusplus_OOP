#include <iostream>
using namespace std;
int numEven( int v[], int numItems){
    int n = v[numItems-1] ;
    if (numItems == 0){
        return 0;
    }
    else if (n%2 == 0) {
        return numEven(v,numItems - 1)+1 ;

    }
    else {
        return numEven(v,numItems - 1) ;
    }
}
int main() {
    int v[10] = {10, 12, 3, 15, 2, 8, 9, 20, 21, 7};
    cout << numEven(v, 10);
    return 0;
}

