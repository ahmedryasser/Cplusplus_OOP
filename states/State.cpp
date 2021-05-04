//
// Created by Ahmed Yasser on 4/26/2020.
//
#include "State.h"
#include <cassert>

// class State
State::State(string name, string abbr, StateColor color)
{
    _name = name;
    _abbr = abbr;
    _color = color;
    _neighbors[MAX_NEIGHBORS] = nullptr;
    _numNeighbors = 0;
}

string State::name() const
{
    return _name;
}

string State::abbreviation() const
{
    return _abbr;
}

int State::numNeighbors() const
{
    return sizeof(_neighbors);
}

State::~State()
{
    for (int i=0;i<numNeighbors();i++){
        removeTwoWayNeighbor(_neighbors[i]);
    }
    delete this;
}

void State::addTwoWayNeighbor(State *neighbor)
{
    assert(_numNeighbors < MAX_NEIGHBORS);
    _neighbors[_numNeighbors+1] = neighbor;
    neighbor->_neighbors[neighbor->_numNeighbors+1] = this;
}

void State::addNeighbor(State *neighbor)
{
    assert(_numNeighbors < MAX_NEIGHBORS);
    _neighbors[_numNeighbors+1] = neighbor;
    _numNeighbors++;
}

void State::removeTwoWayNeighbor(State *neighbor)
{
    State* temp;
    for (int i=0;i<MAX_NEIGHBORS;i++ ){
        if (_neighbors[i] == neighbor){
            temp = _neighbors[i];
            _neighbors[i] = _neighbors[_numNeighbors];
            _neighbors[_numNeighbors] = temp;
            _numNeighbors--;
        }
    }
    for (int i=0;i<MAX_NEIGHBORS;i++ ){
        if (neighbor->_neighbors[i] == this){
            temp = neighbor->_neighbors[i];
            neighbor->_neighbors[i] = neighbor->_neighbors[_numNeighbors];
            neighbor->_neighbors[_numNeighbors] = temp;
            _numNeighbors--;
        }
    }
}

void State::removeNeighbor(State *neighbor)
{
    State* temp;
    for (int i=0;i<MAX_NEIGHBORS;i++ ){
        if (_neighbors[i] == neighbor){
            temp = _neighbors[i];
            _neighbors[i] = _neighbors[_numNeighbors];
            _neighbors[_numNeighbors] = temp;
            _numNeighbors--;
        }
    }
}

bool State::hasNeighbor(string abbr)
{
    for(int i =0; i<_numNeighbors; i++){
        if ((_neighbors[i]->_abbr) == abbr){
            return true;
        }
    }
    return false;
}

State *State::getNeighbor(string abbr)
{
    for(int i =0; i<_numNeighbors; i++){
        if ((_neighbors[i]->_abbr) == abbr){
            return _neighbors[i];
        }
    }
}

bool State::isNearState(string abbr, int threshold)
{
    StateQueue checked;
    return isNearStateHelper(abbr, threshold, checked);
}

bool State::isNearStateHelper(string abbr, int threshold, StateQueue &checkedStates)
{
    if (hasNeighbor(abbr)) {
        checkedStates.enqueue(getNeighbor(abbr));
        return true;
    }
    else {
        for(int i = 0; i<threshold; i++) {
            if (_neighbors[i]->hasNeighbor(abbr)) {
                checkedStates.enqueue(getNeighbor(abbr));
                return true;
            }
        }
        return false;
    }

    //attempt 3

//    if (hasNeighbor(abbr)) {
//        checkedStates.enqueue(getNeighbor(abbr));
//        return true;
//    }
//    else {
//        for(int i = 0; i<threshold; i++) {
//            return isNearStateHelper(_neighbors[0]->_abbr, threshold, checkedStates) || otherStates;
//        }
//    }

 //attempt 2

//    for(int i =0; i<threshold; i++){
//        for (int j =0; j< _neighbors[i]->_numNeighbors;j++) {
//            if (hasNeighbor(abbr) == abbr && (threshold == (i+1))) {
//                checkedStates.enqueue(_neighbors[i]);
//                return true;
//            } else {
//                isNearStateHelper(_neighbors[i]->_abbr,threshold, checkedStates);
//            }
//        }
//    }
//    return false;

//attempt 1

//    State *p = this->_neighbors[0];
//    for(int i =0; i<threshold; i++){
//        for (int j =0; j< _neighbors[i]->_numNeighbors;j++) {
//            if ((_neighbors[i]->_abbr) == abbr && (threshold == (i+1))) {
//                return true;
//            } else {
//                p = p->_neighbors[j];
//            }
//        }
//    }
//    return false;
}

int State::numStatesNear(int threshold, StateColor color)
{
    StateQueue checked;
    return numStatesNearHelper(threshold, color, checked);
}

int State::numStatesNearHelper(int threshold, StateColor color, StateQueue &checkedStates)
{

    int numState = 0;
    State *p = this->_neighbors[0];
    for(int i =0; i<threshold; i++){
        for (int j =0; j< _neighbors[i]->_numNeighbors;j++) {
            if ((p->_color) == color && threshold <= i) {
                checkedStates.enqueue(_neighbors[i]);
                numState++;
            } else {
                numStatesNearHelper(threshold -1, color, checkedStates);
            }
        }
    }
    return numState;

// Prev attempt:
//    int numState = 0;
//    State *p = this->_neighbors[0];
//    for(int i =0; i<threshold; i++){
//        for (int j =0; j< _neighbors[i]->_numNeighbors;j++) {
//            if ((p->_color) == color && threshold <= i) {
//                checkedStates.enqueue(_neighbors[i]);
//                numState++;
//            } else {
//                p = p->_neighbors[j];
//            }
//        }
//    }
//    return numState;
}


// class StateNode
StateNode::StateNode(State *state)
{
    _state = state;
    _next = nullptr;
}

StateNode::~StateNode()
{
    if(_next != nullptr){
        delete _next;
        _next= nullptr;
    }
}


// class StateQueue
StateQueue::StateQueue()
{
    _head = nullptr;
    _tail = nullptr;
}

StateQueue::~StateQueue()
{
    if (_head != nullptr){
        delete _head;
        _head = nullptr;
    }
}

void StateQueue::enqueue(State *state)
{
    StateNode*temp = new StateNode(state);
    if (_head == nullptr && _tail == nullptr){
        _head = temp;
        _tail = temp;
    }
    else {
        _tail->_next = temp;
        _tail = temp;
    }
}

State *StateQueue::dequeue()
{
    assert(_tail != nullptr && _head != nullptr);
    State *temp = _head->_state;
    StateNode *p = _head->_next;
    _head->_next= nullptr;
    delete _head;
    _head= p;
    return temp;
}

void StateQueue::clear()
{
    StateNode*p = _head;
    while (p!= nullptr){
        delete _head;
        p= p->_next;
        _head = p;
    }
    _head = nullptr;
    _tail = nullptr;
}

bool StateQueue::isEmpty() const
{
    return (_head == nullptr && _tail == nullptr);
}

bool StateQueue::contains(State *state) const
{
    StateNode* p= _head;
    while(p){
        if (p->_state = state){
            return true;
        }
        else {
            p = p->_next ;
        }
    }
    return false;
}

void StateQueue::toStream(ostream &os) const
{
    os<<endl;
    StateNode*p = _head;
    while (p!= nullptr){
        os << p->_state<< endl;
        p= p->_next;
    }
    os<<endl;
}

ostream &operator <<(ostream &lhs, const StateQueue &rhs)
{
    rhs.toStream(lhs);
    return lhs;
}