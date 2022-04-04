#include "Node.h"

Node::Node(){}

Node::Node(Student* student) {
    value = student;
    next = NULL;
}

Node::~Node() {
    delete value;
    next = NULL;
}

void Node::setNext(Node* newNext) {
    next = newNext;
}

void Node::setValue(Student* newValue) {
    value = newValue;
}

Node* Node::getNext() {
    return next;
}

Student* Node::getValue() {
    return value;
}
