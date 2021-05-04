#include <iostream>
using namespace std;
void mergeSort(int v[], int start, int end){
    const int MAX_SIZE = 15;
    if (start<end){
        int mid = (start + end)/2;
        mergeSort(v, start, mid);
        mergeSort(v, mid+1, end);
        int i = start;
        int j = mid+1;
        int k = start;
        int w[MAX_SIZE];
        while (i<mid+1 && j < end+1){
            if (v[i] < v[j]){
                w[k] = v[i];
                i++;
            }
            else{
                w[k] = v[j];
                j++;
            }
            k++;
        }
        if (i>=mid+1){
            for (int a =j; a< end+1; a++){
                w[k] = v[a];
                k++;
            }
        }
        else{
            for (int a = i; i<mid+1; a++){
                w[k] = v[a];
                k++;
            }
        }
        for (int k = start; k<= end; k++){
            v[k] = w[k];
        }
    }
}

int main() {
    

    return 0;
}
