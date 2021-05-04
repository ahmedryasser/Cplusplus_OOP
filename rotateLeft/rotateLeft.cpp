#include <iostream>
using namespace std;
void rotateLeft(double v[], int numItems){
    if (numItems > 1){
        int temp =v[0];
        v[0] = v[1];
        v[1] = temp;
        return rotateLeft(v+1, numItems-1);
    }
}
int main() {
    double v[] = {1, 2, 3, 4, 5};
    rotateLeft(v,5);
    cout << v[0] << v[1]<< v[2]<< v[3]<< v[4] ;
    return 0;
}