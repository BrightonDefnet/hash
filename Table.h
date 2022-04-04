#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

class Table {
    public:
        Table(); //default constructor
        void ADD(string, string, int, float); //add a student to the table
        void PRINT(); //print a student's info
        void DELETE(); //delete a student from the list

    private:
        int size = 5;
        Node** table;
        void rehash();
};

#endif
