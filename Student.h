#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
    public:
        Student(); //default constructor
        Student(string, string, int, float); //create a new student with parameters
        void setFirst(string); //set first name
        void setLast(string); //set last name
        void setId(int); //set id
        void setGpa(float); //set gpa
        string getFirst(); //get first name
        string getLast(); //get last name
        int getId(); //get id
        float getGpa(); //get gpa

    private:
        string first; //first name
        string last; //last name
        int id; //id
        float gpa; //gpa
};

#endif
