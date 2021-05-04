#include <iostream>
using namespace std;
void selectionSort(int v[], int numItems){
    if (numItems>1){
        int maxIdx = 0;
        for (int i = 1; i<numItems; i++){
            if (v[i]>v[maxIdx]){
                maxIdx = i;
            }
        }
    }
}
int main() {
    double v[] = {1, 8, 3, 9, 2};
    cout << selectionSort(v,5);
    return 0;
}
