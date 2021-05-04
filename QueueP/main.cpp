#include "Queue.h"
#include <iostream>
using namespace std;
int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    Queue r=q;
    cout<< "r = "<<r.size()<< "q = "<<q.size();
    cout<< q<<endl<< endl;
    cout<<q.dequeue()<<endl<<endl;
    cout<< q.head()<<endl<< endl <<endl;
    cout<< q<<endl<< endl <<endl;
    q.enqueue(8);
    cout<< q<<endl<< endl <<endl;
    cout<< q.size()<< endl <<endl;
    cout<< q.isEmpty()<< endl <<endl;
    q.clear();
    cout<< q.isEmpty()<< endl <<endl;
    cout <<r<<endl;
    r.enqueue(5);
    r.dequeue();
    cout <<r;
    return 0;
}

