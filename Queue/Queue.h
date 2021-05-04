//
// Created by Ahmed Yasser on 3/10/2020.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#include <iostream>
using namespace std;
const int CAPACITY = 8;
class Queue {
private:
    int _body[CAPACITY + 1];
    int _front;
    int _rear;
public:
    Queue();
    void enqueue(int val);
    int dequeue();
    int size() const; // returns the number of items on the queue
    int head() const; // returns the item at the front of the queue without removing it
    bool isEmpty() const; // returns true when the queue is empty, false otherwise
    bool isFull() const; // returns true when the queue is full, false otherwise
    void toStream(ostream &os) const;
};

ostream &operator <<(ostream &os, const Queue &rhs);

#endif //QUEUE_QUEUE_H
