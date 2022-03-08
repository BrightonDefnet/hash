#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"
using namespace std;

class Node {
    public:
        Node(); //default constructor
        Node(Student*); //create a new node with a student
        ~Node(); //delete a node
        void setNext(Node*); //set the next node
        void setValue(Student*); //set the value
        Node* getNext(); //get the next node
        Student* getValue(); //get the value

    private:
        Node* next; //next node
        Student* value; //stored value
};

#endif
