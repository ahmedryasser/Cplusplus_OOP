#include <iostream>
using namespace std;
void print (const int v[], int numItems){
    if (numItems == 0){
        cout << endl;
    }
    else{
        print(v, numItems-1);
        cout << v[numItems-1] << " ";
    }
}

int binarySearch (const int v[], int searchNum, int start, int end){
    int mid = (start+end)/2;
    if (start> end){
        return -1;
    }
    else if (v[mid] == searchNum){
        return mid;
    }
    else if (v[mid] < searchNum){

        return binarySearch(v, searchNum, mid+1, end);
    }
    else {
        return binarySearch(v, searchNum, start, mid-1);
    }
}

int main() {
    int v[] = {10, 20, 30, 40, 50, 60, 70, 80};
    cout << binarySearch(v, 70, 0, 7);
    return 0;
}
