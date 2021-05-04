#include <iostream>
using namespace std;
void print(int v[], int numItems){
    for (int i =0; i< numItems; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    int x[4];
    for (int i=0;i<4;i++){
        x[i]= i+1;
    }
    for (int i=0;i<4;i++){
        cout << x[i] << " ";
    }


}
