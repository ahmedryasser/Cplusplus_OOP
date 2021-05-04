//
// Created by Ahmed Yasser on 4/26/2020.
//
#include <iostream>
#ifndef STATES_STATE_H
#define STATES_STATE_H
#include <map>
using namespace std;
class StateQueue;
enum StateColor {red, blue, purple, any};
const int MAX_NEIGHBORS = 8;

class State {
    friend class StateNode;
    friend class StateQueue;
private:
    string _name;
    string _abbr;
    StateColor _color;
    State *_neighbors[MAX_NEIGHBORS];
    int _numNeighbors;
    bool isNearStateHelper(string abbr, int threshold, StateQueue &checkedNodes);
    int numStatesNearHelper(int threshold, StateColor color, StateQueue &checkedNodes);
public:
    State(string name, string abbr, StateColor color);
    ~State();
    string name() const;
    string abbreviation() const;
    int numNeighbors() const;
    void addTwoWayNeighbor(State *neighbor);
    void addNeighbor(State *neighbor);
    void removeTwoWayNeighbor(State *neighbor);
    void removeNeighbor(State *neighbor);
    bool hasNeighbor(string abbr);
    State *getNeighbor(string abbr);
    bool isNearState(string abbr, int threshold);
    int numStatesNear(int threshold, StateColor color);
};

class StateNode {
    friend class StateQueue;
private:
    State *_state;
    StateNode *_next;
public:
    StateNode(State *state);
    ~StateNode();
};

class StateQueue {
private:
    StateNode *_head;
    StateNode *_tail;
public:
    StateQueue();
    ~StateQueue();
    void enqueue(State *state);
    State *dequeue();
    void clear();
    bool isEmpty() const;
    bool contains(State *state) const;
    void toStream(ostream &os) const;
};

ostream &operator <<(ostream &lhs, const StateQueue &rhs);



#endif //STATES_STATE_H
