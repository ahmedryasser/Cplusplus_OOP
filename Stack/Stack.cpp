//
// Created by Ahmed Yasser on 2/25/2020.
//
#include <iostream>
#include "Stack.h"
using namespace std;
Stack::Stack()
{
    _top =0;
}
void Stack::push(int val){
    _body[_top++] = val;
}
int Stack::size(){
    return _top;
}
int Stack::top() {
    return _body[_top-1];
}
void Stack::clear() {
    _top= 0;
}
int Stack::pop(){
    _top--;
    return _body[_top - 1];
}
void Stack::toStream(ostream &os) const {
    for (int i = size() - 1; i>=0; i-- ){
        os << _body[i] << endl;
    }
    os << "_____________________"<< endl;
    os << "/////////////////////"<< endl;
}

ostream &operator << (ostream &lhs, const &rhs){
    rhs.toStream(lhs);
    return lhs;
}