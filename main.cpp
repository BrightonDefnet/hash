/*
 * Hash
 * Brighton Defnet 2022
 * create a hash table function to store student information
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Node.h"
#include "Table.h"
#include "Student.h"
using namespace std;

int id = 0;
void genStudent(Table* t);

int main() {
    Table* t = new Table();
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    genStudent(t);
    t->PRINT(4);
}

///randomly generate a new student
void genStudent(Table* t) {
    string line;
    vector<string> first;
    vector<string> last;
    //get first name
    ifstream firstfile("first.txt");
    if(firstfile.is_open()) {
        while(getline(firstfile, line)) {
            first.push_back(line);
        }
        firstfile.close();
    }
    //get last name
    ifstream lastfile("last.txt");
    if(lastfile.is_open()) {
        while(getline(lastfile, line)) {
            last.push_back(line);
        }
        lastfile.close();
    }
    //create student
    string firstname = first.at(rand() % 20);
    string lastname = last.at(rand() % 20);
    int sid = id;
    id += 1;
    float gpa = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4));
    t->ADD(firstname, lastname, sid, gpa);
}
