#include "Stack.h"
using namespace std;
int main() {
    Stack s;
    s.push(3);
    s.push(4);
    s.push(8);
//    s->push(3);
//    s->push(4);
//    s->push(8);
    Stack r=s;
    s.pop();
    s.pop();
//    cout<< "Size = "<<s->size()<<endl<<endl;
//    cout<< *s <<endl;
//    cout<<"Empty? " <<s->isEmpty()<< endl<<endl;
//    cout << s->pop()<<endl<<endl;
//    cout<< *s <<endl;
//    cout << s->pop()<< endl<<endl;
//    cout<< *s <<endl;
//    cout<< s->top() <<endl;
//    cout << s->pop()<< endl<<endl;
//    cout<< *s <<endl;
//    cout<< s->isEmpty()<< endl;
    cout<<"r = " << endl<<r<<endl;
    return 0;
}
