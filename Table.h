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
        bool PRINT(int); //print a student's info
        bool DELETE(int); //delete a student from the list

    private:
        Node* sizeOne[100] = {nullptr};
        Node* sizeTwo[200] = {nullptr};
        Node* sizeThree[400] = {nullptr};
        Node* sizeFour[800] = {nullptr};
        Node* sizeFive[1600] = {nullptr};
        int current = 1;
};

#endif
