#include <iostream>
using namespace std;
bool neighbor13(const int v[], int numItems){

    if ((v[numItems-1]+v[numItems -2]) == 13){
        return true;
    }
    else if (numItems == 0){
        return false;
    }
    else {
        return neighbor13(v, numItems-1);
    }
}
int main() {
    const int v[] = {1, 2, 11, 4, 10};
    if (neighbor13(v,5) == 1){ cout <<"True";}
    else{ cout << "False";}
}