//
// Created by Ahmed Yasser on 4/21/2020.
//
#include "Queue.h"
#include "cassert"
// constructors
Node::Node(int val)
{
    _value = val;
    _next = nullptr;
}

Queue::Queue()
{
    _rear = nullptr;
    _front = nullptr;
}

Queue::Queue(const Queue &q)
{
    _front = nullptr;
    Node *s = nullptr;
    Node *r = s;
    for (Node *p = q._front; p != nullptr;p = p->_next){
        r=s;
        s= new Node(p->_value);
        if (_front == nullptr){
            _front = s;
        }
        else {
            r->_next = s;
        }
    }
    _rear = s;
}

// destructors
Node::~Node()
{
    if(_next != nullptr){
        delete _next;
        _next= nullptr;
    }
}

Queue::~Queue()
{
    if (_front != nullptr){
        delete _front;
        _front = nullptr;
    }
}

// Queue methods

void Queue::enqueue(int val)
{
    Node*temp = new Node(val);
    if (_front == nullptr && _rear == nullptr){
        _front = temp;
        _rear = temp;
    }
    else {
        _rear->_next = temp;
        _rear = temp;
    }
}

int Queue::dequeue()
{
    assert(_rear != nullptr && _front != nullptr);
    int temp = _front->_value;
    Node *p = _front->_next;
    _front->_next= nullptr;
    delete _front;
    _front= p;
    return temp;
}

int Queue::size() const
{
    Node*p = _front;
    int i = 0;
    while (p!= nullptr){
        p= p->_next;
        i++;
    }
    return i;
}

bool Queue::isEmpty() const
{
    return (_front == nullptr && _rear == nullptr);
}

void Queue::clear()
{
    Node*p = _front;
    while (p!= nullptr){
        delete _front;
        p= p->_next;
        _front = p;
    }
    _front = nullptr;
    _rear = nullptr;
}

int Queue::head() const
{
    return _front->_value;
}

Queue& Queue::operator=(const Queue &rhs)
{
    if (this == &rhs){
        return *this;
    }
    else {
        Queue temp(rhs);
        delete _front;
        _front = temp._front;
        _rear = temp._rear;
        delete temp._front;
        delete temp._rear;
        return *this;
    }
}

void Queue::toStream(ostream &os) const
{
    cout<<"_______________"<<endl;
    Node*p = _front;
    while (p!= nullptr){
        os << p->_value<< endl;
        p= p->_next;
    }
    cout<<"_______________"<<endl;
}

ostream &operator <<(ostream &os, const Queue &rhs)
{
    rhs.toStream(os);
    return os;
}
