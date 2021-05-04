#include <iostream>
using namespace std;
void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main() {
    int v[] = {40, 80, 30, 10, 50, 20, 70, 80};
    quickSort(v, 0, 8);
    cout << v[0] << v[1] << v[2] << v[3] << v[4] << v[5]<<  v[6] << v[7];
    return 0;
}