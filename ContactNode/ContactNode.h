//
// Created by Ahmed Yasser on 4/20/2020.
//
#include <iostream>
#ifndef CONTACTNODE_CONTACTNODE_H
#define CONTACTNODE_CONTACTNODE_H
using namespace std;

class ContactNode {
public:
    ContactNode(string name, string phoneNum);
    void InsertAfter(ContactNode* node);
    string GetName();
    string GetPhoneNumber();
    ContactNode* GetNext() ;
    void PrintContactNode();

private:

    string contactName;
    string contactPhoneNum;
    ContactNode* nextNodePtr;
};

#endif //CONTACTNODE_CONTACTNODE_H
