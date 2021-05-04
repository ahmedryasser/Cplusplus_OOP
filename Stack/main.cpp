#include <iostream>
#include "Stack.h"
using namespace std;
int main() {
    Stack s;
    s.push(3);
    s.push(8);
    s.push(4);
    cout << s;
    cout<< "There are " << s.size() << " items." << endl;
    int x = s.pop();
    int y = s.pop();
    s.push(6);
    s.clear();
    cout << s;
    return 0;
}
