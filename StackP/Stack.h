

#ifndef STACKP_STACK_H
#define STACKP_STACK_H

#include "iostream"
using namespace std;
class Node{
    friend class Stack;
private:
    int _val;
    Node* _next;
public:
    Node(int val);
    ~Node();
};
class Stack {
private:
    Node*_top;

public:
    Stack();
    Stack(const Stack& s);
    ~Stack();
    void push( int val);
    int pop();
    bool isEmpty();
    int top() const;
    void clear();
    int size() const;
    void toStream(ostream &os)const;
    Stack& operator=(const Stack &rhs);
};

ostream &operator <<(ostream &lhs, const Stack &rhs);

#endif //STACKP_STACK_H
