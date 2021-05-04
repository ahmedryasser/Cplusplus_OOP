#include <iostream>
#include "Queue.h"
using namespace std;
int main() {
    Queue q;
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<< q<<endl;
    return 0;
}
