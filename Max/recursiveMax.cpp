#include <iostream>
using namespace std;
int max(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
int recursiveMax(int v[], int numItems){
    if (numItems == 1)
        return v[0];
    return max(v[numItems-1], recursiveMax(v, numItems-1));
}
int main() {
    int v[]= {1, 3, 5, 6, 8, 12, 3};
    cout << recursiveMax(v, 7);
    return 0;
}
