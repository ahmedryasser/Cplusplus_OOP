#include "Stack.h"
#include "cassert"
// Constructors

Stack::Stack(){
    _top = nullptr;
}
Stack::Stack(const Stack &s){
    _top = nullptr;
    Node *q = nullptr;
    Node *r = q;
    for (Node *p = s._top; p != nullptr;p = p->_next){
        r=q;
        q= new Node(p->_val);
        if (_top == nullptr){
            _top = q;
        }
        else {
            r->_next = q;
        }
    }
}
Node::Node(int val) {
    _val=val;
    _next = nullptr;
}

Stack::~Stack(){
    if (_top != nullptr){
        delete _top;
        _top = nullptr;
    }
}
Node::~Node() {
    if(_next != nullptr){
        delete _next;
        _next= nullptr;
    }
}
void Stack::push(int val){
    Node*temp = new Node(val);
    Node *p = _top;
    _top = temp;
    temp->_next = p;
}
bool Stack::isEmpty(){
    return _top == nullptr;
}
int Stack::top() const{
    return _top->_val;
}
void Stack::clear(){
    Node*p = _top;
    while (p!= nullptr){
        delete _top;
        p= p->_next;
        _top = p;
    }
    _top = nullptr;
}
int Stack::size() const{
    Node*p = _top;
    int i = 0;
    while (p!= nullptr){
        p= p->_next;
        i++;
    }
    return i;
}

int Stack::pop(){
    assert(_top != nullptr);
    int temp = _top->_val;
    Node *p = _top->_next;
    _top->_next= nullptr;
    delete _top;
    _top= p;
    return temp;
}

void Stack::toStream(ostream &os)const{
    Node*p = _top;
    while (p!= nullptr){
        os << p->_val<< endl;
        p= p->_next;
    }
    os <<"__________"<<endl << "/////////" << endl;
}
Stack &Stack::operator =(const Stack &rhs){
    if (this == &rhs){
        return *this;
    }
    else {
        Stack temp(rhs);
        delete _top;
        _top = temp._top;
        delete temp._top;
        return *this;
    }
}

ostream &operator <<(ostream &lhs, const Stack &rhs){
    rhs.toStream(lhs);
    return lhs;
}