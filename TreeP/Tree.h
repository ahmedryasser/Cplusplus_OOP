//
// Created by Ahmed Yasser on 4/22/2020.
//

#ifndef TREEP_TREE_H
#define TREEP_TREE_H

#include <iostream>
using namespace std;

class Node {
    friend class Tree;

private:
    Node *_left;
    int _val;
    Node *_right;

public:
    Node(int value = 0);
    Node(const Node &n);
    ~Node();
    void inOrder(ostream &os) const;
    void preOrder(ostream &os) const;
    void postOrder(ostream &os) const;
    int size() const;
    int numLeaves() const;
    int numInternals() const;
    int height() const;
    Node operator =(const Node &rhs);
};

class Tree {

private:
    Node *_root;

public:
    Tree();
    Tree(const Tree &tree);
    ~Tree();
    void insert(int value);
    void inOrder(ostream &os) const;
    void preOrder(ostream &os) const;
    void postOrder(ostream &os) const;
    int size() const;
    int numLeaves() const;
    int numInternals() const;
    int height() const;
    bool contains(int value) const;
    Tree operator =(const Tree &rhs);
};



#endif //TREEP_TREE_H
