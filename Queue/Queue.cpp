//
// Created by Ahmed Yasser on 3/10/2020.
//

#include "Queue.h"
Queue::Queue(){
    _front = 0;
    _rear = 0;
}
void Queue::enqueue(int val){
    _body[_rear] = val;
    _rear = (_rear +1)% (CAPACITY+1);
}
bool Queue::isFull() const{
    return _front == (_rear + 1) % (CAPACITY + 1);
}
bool Queue::isEmpty() const {
    return _front == _rear;
}
void Queue::toStream(ostream &os) const {
    for (int i = _front; i< _rear; i++){
        os << _body[i] << " ";
    }
}
int Queue::dequeue(){
    int num = _body[_front];
    _front = (_front +1)% CAPACITY;
    return num;
}
ostream &operator <<(ostream &os, const Queue &rhs){
    rhs.toStream(os);
    return os;
}