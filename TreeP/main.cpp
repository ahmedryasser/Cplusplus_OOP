#include <iostream>
#include "Tree.h"
using namespace std;
int main() {
    Tree t;
    t.insert(60);
    t.insert(30);
    t.insert(10);
    t.insert(80);
    t.insert(50);
    t.insert(20);
    t.insert(16);
    t.insert(5);
    t.insert(90);
    t.insert(87);
    cout << "in order = ";
    t.inOrder(cout);
    cout<<endl<< "Size = "<<t.size()<<endl;
    cout << "post order = ";
    t.postOrder(cout);
    cout<<endl;
    cout << "pre order = ";
    t.preOrder(cout);
    cout<<endl;
    cout<<"contains 70 "<<t.contains(70)<< endl;
    cout<<"number of leaves is "<<t.numLeaves()<< endl;
    cout<<"number of internals is "<<t.numInternals()<< endl;
    cout<<"Height is "<<t.height()<< endl;
    return 0;
}
