#include "Student.h"

Student::Student(){}

Student::Student(string f, string l, int i, float g) {
    first = f;
    last = l;
    id = i;
    gpa = g;
}

void Student::setFirst(string s) {
    first = s;
}

void Student::setLast(string s) {
    last = s;
}

void Student::setId(int i) {
    id = i;
}

void Student::setGpa(float g) {
    gpa = g;
}

string Student::getFirst() {
    return first;
}

string Student::getLast() {
    return last;
}

int Student::getId() {
    return id;
}

float Student::getGpa() {
    return gpa;
}
