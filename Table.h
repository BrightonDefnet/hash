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
};

#endif
