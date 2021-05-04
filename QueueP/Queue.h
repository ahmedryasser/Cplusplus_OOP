//
// Created by Ahmed Yasser on 4/21/2020.
//

#ifndef QUEUEP_QUEUE_H
#define QUEUEP_QUEUE_H


#include <iostream>
#include <cassert>
using namespace std;

class Node {
    friend class Queue;
private:
    int _value;
    Node *_next;
public:
    Node(int val = 0);
    ~Node();
};

class Queue {
private:
    Node *_front;
    Node *_rear;
public:
    Queue();
    Queue(const Queue &q);
    ~Queue();
    void enqueue(int val);
    int dequeue();
    int size() const;
    bool isEmpty() const;
    void clear();
    int head() const; // returns the integer at the front of the queue
    // without deleting it
    Queue& operator=(const Queue &rhs);
    void toStream(ostream &os) const;
};

ostream &operator <<(ostream &os, const Queue &rhs);

#endif //QUEUEP_QUEUE_H
