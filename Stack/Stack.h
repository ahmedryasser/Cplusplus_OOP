//
// Created by Ahmed Yasser on 2/25/2020.
//
#include <cassert>
#include <iostream>
using namespace std;

#ifndef STACK_STACK_H
#define STACK_STACK_H

const int CAPACITY = 8;


class Stack {
private:
    int _body[CAPACITY];
    int _top;
public:
    Stack();
    void push(int val);
    int pop();
    int size() const;
    int top() const;
    void clear(void);
    void toStream(ostream &os) const;
};

ostream &operator <<(ostream &lhs, const Stack &rhs);

#endif //STACK_STACK_H
