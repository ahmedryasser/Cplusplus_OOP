//
// Created by Ahmed Yasser on 4/22/2020.
//
#include "Tree.h"
using namespace std;

// Constructors
Tree::Tree()
{
    _root = nullptr;
}

Tree::Tree(const Tree &tree)
{
    if(tree._root)
    {
        Node *temp = new Node(*tree._root);
        _root = temp;
    }
}

Node::Node(int value)
{
    _val = value;
    _left = nullptr;
    _right = nullptr;
}

Node::Node(const Node &n)
{
    _val = n._val;
    _left = nullptr;
    _right = nullptr;
    if(n._left)
    {
        Node *temp = new Node(*n._left);
        _left = temp;
    }
    if(n._right)
    {
        Node *temp = new Node(*n._right);
        _right = temp;
    }
}

// Destructors
Tree::~Tree()
{
    if(_root)
    {
        delete _root;
        _root = nullptr;
    }
}

Node::~Node()
{
    if(_left)
    {
        delete _left;
        _left = nullptr;
    }
    if(_right)
    {
        delete _right;
        _right = nullptr;
    }
}

// insert
void Tree::insert(int value)
{
    Node *temp = new Node(value);
    Node*p = _root;
    Node *q = p;
    while (p != nullptr){
        q=p;
        if (value > p->_val){
            p = p->_right;
        }
        else {
            p= p->_left;
        }
    }
    if(_root==nullptr){
        _root = temp;
    }
    else if (value > q->_val){
        q->_right = temp;
    }
    else{
        q->_left = temp;
    }
}


// inOrder
void Tree::inOrder(ostream &os) const
{
    if (_root ){//_root != nullptr
        _root->inOrder(os);
    }
    cout<<endl;
}

void Node::inOrder(ostream &os) const
{
    if(_left) {
        _left->inOrder(os);
    }
    os<<_val << " ";
    if (_right){
        _right->inOrder(os);
    }
}

//preOrder
void Tree::preOrder(ostream &os) const
{
    if(_root) // _root != nullptr
    {
        _root->preOrder(os);
    }
    os << endl;
}

void Node::preOrder(ostream &os) const
{
    os << _val << " ";
    if(_left)
    {
        _left->preOrder(os);
    }
    if(_right)
    {
        _right->preOrder(os);
    }
}

// postOrder
void Tree::postOrder(ostream &os) const
{
    if (_root ){//_root != nullptr
        _root->postOrder(os);
    }
    cout<<endl;
}

void Node::postOrder(ostream &os) const
{
    if(_left)
    {
        _left->postOrder(os);
    }
    if(_right)
    {
        _right->postOrder(os);
    }
    os << _val << " ";
}

// size
int Tree::size() const
{
    if(_root){
        return _root->size();
    }
    else {
        return 0;
    }
}

int Node::size() const
{
    int leftSize = (_left? _left->size(): 0);
    int rightSize= (_right? _right->size(): 0);
    return 1 + leftSize + rightSize; // stub
}

// numLeaves
int Tree::numLeaves() const
{
    if(_root){
        return _root->numLeaves();
    }
    else {
        return 0;
    }
}

int Node::numLeaves() const
{
    int leftLeaf = (_left ? _left->numLeaves(): 0);
    int rightLeaf= (_right? _right->numLeaves(): 0);
    return (!_left && !_right? 1:0) + leftLeaf + rightLeaf;
}

//numInternals
int Tree::numInternals() const
{
    if(_root){
        return _root->numInternals();
    }
    else {
        return 0;
    }
}

//
int Node::numInternals() const
{
    int leftIntNodes = (_left ? _left->numInternals(): 0);
    int rightIntNodes= (_right? _right->numInternals(): 0);
    return (!_left && !_right? 0:1) + leftIntNodes + rightIntNodes;
}

// height
int Tree::height() const
{
    if(_root){
        return _root->height();
    }
    else {
        return 0;
    }
}

int Node::height() const
{
    int leftSize = (_left ? _left->height(): 0);
    int rightSize= (_right? _right->height(): 0);
    if (rightSize > leftSize) {
        return 1 + rightSize;
    }
    else{
        return 1 + leftSize;
    }
}

// contains
bool Tree::contains(int value) const
{

    Node* p= _root;
    while(p){
        if (p->_val = value){
            return true;
        }
        else if (value > p->_val){
            p= p->_right;
        }
        else {
            p = p->_left ;
        }

    }
    return false;
}
//
//// operator =
Tree Tree::operator =(const Tree &rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        Tree temp(rhs);
        delete _root;
        _root = temp._root;
        temp._root = nullptr;
        return *this;
    }
}

Node Node::operator =(const Node &rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        Node temp(rhs);
        delete _left;
        delete _right;
        _left = temp._left;
        _right = temp._right;
        temp._left = nullptr;
        temp._right = nullptr;
        return *this;
    }
}

