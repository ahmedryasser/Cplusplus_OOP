#include <iostream>
using namespace std;
int linearSearch(int v[], int searchNum, int numItems){
    if (v[numItems-1] == searchNum){
        return numItems-1;
    }
    else if (v[numItems-1] == 0 ){
        return -1;
    }
    else {
        return linearSearch(v, searchNum, numItems - 1);
    }
}
int main() {
    int v[] = {10, 12, 3, 15, 2, 8, 9, 20, 21};
    cout << linearSearch(v, 5, 9);
    return 0;
}
