//
// Created by Ahmed Yasser on 4/25/2020.
//

#include "List.h"

List::List(){
    _head = new EmptyNode;
}
EmptyNode::EmptyNode(){

}
NonEmptyNode::NonEmptyNode(int val, List prev){
    _val = val;
    _next = *(new List);
}
void List::insert(int val){
    _head->insert(val, *this);
};
void EmptyNode::insert(int val, List prev) {
    NonEmptyNode* temp = new NonEmptyNode(val);
    prev._head = temp;
}