//
// Created by Ahmed Yasser on 4/25/2020.
//

#ifndef ORDEREDLIST_LIST_H
#define ORDEREDLIST_LIST_H
class Node;

class List {
    friend class EmptyNode;
    friend class NonEmptyNode;

private:
    Node *_head;
public:
    List();
    void print() const;
    void insert(int val);
};

class Node{
public:
    virtual ~Node() = default; // virtual means inheritable
    virtual void print() const =0; // const = 0 means abstract
    virtual void insert(int val) = 0;
};
class EmptyNode: public Node{
public:
    void print() const;
    void insert( int val);
};
class NonEmptyNode : public Node{
private:
    int _val;
    List _next;
public:
    void print() const;
    void insert(int val);
};

#endif //ORDEREDLIST_LIST_H
