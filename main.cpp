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
void genStudent();

int main() {
}

///randomly generate a new student
void genStudent() {
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
    cout << firstname << endl;
    cout << lastname << endl;
    cout << sid << endl;
    cout << gpa << "\n" << endl;
}

/*
//get student data
string first;
string last;
int id;
float gpa;
cout << "\nenter first name" << endl;
cin >> first;
cout << "\nenter last name" << endl;
cin >> last;
cout << "\nenter student id" << endl;
cin >> id;
cout << "\nenter student gpa" << endl;
cin >> gpa;
*/
