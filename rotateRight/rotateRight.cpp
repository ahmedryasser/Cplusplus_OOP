#include <iostream>
using namespace std;
void rotateRight(double v[], int numItems){
    if (numItems == 1){
        return;
    }
    int temp =v[numItems-1];
    v[numItems-1] = v[numItems-2];
    v[numItems-2] = temp;
    return rotateRight(v, numItems-1);
}
int main() {
    double v[] = {1, 2, 3, 4, 5};
    rotateRight(v,5);
    cout << v[0] << v[1]<< v[2]<< v[3]<< v[4] ;
    return 0;
}
