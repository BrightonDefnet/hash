#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

class Table {
    public:
        Table(); //default constructor
        bool ADD(); //add a student to the table
        bool PRINT(); //print a student's info
        bool DELETE(); //delete a student from the list

    private:
        Node* table[100] = {nullptr};
};

#endif
