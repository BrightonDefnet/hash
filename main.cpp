/*
 * Hash
 * Brighton Defnet 2022
 * create a hash table function to store student information
 */

#include <iostream>
#include "Node.h"
#include "Table.h"
#include "Student.h"
using namespace std;

int main() {
    Table* t = new Table();
    t->ADD();
    t->ADD();

    int id;
    cout << "\nenter id to search for"  << endl;
    cin >> id;
    t->PRINT(id);
}
