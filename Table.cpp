#include "Table.h"

Table::Table() {
    table = new Node*[size];
    for(int i; i < size; i++) {
        table[i] = NULL;
    }
}

///add a new student to the table
void Table::ADD(string first, string last, int id, float gpa) {
    Student* stu = new Student(first, last, id, gpa);
    int key = stu->getId() % size;
    cout << "key: " << key << endl;
    if(table[key] != NULL) { //if the value is NULL
        Node* newnode = new Node(stu);
        cout << "id: " << stu->getId() << "\n" << endl;
        while(table[key]->getNext() != NULL) {
            table[key] = table[key]->getNext();
        }
        table[key]->setNext(newnode);
    } else { //if the value is NOT NULL
        table[key] = new Node(stu);
        cout << "\n" << endl;
    }
}

///search for a student and print their information if found
void Table::PRINT() {
}

///search for a student and delete their data if found
void Table::DELETE() {
}

///rehash the table
void Table::rehash() {
    size *= 2;
    Node** temp = table;
    table = new Node*[size];
    for(int i; i < size; i++) {
        table[i] = NULL;
    }

    //copy elements to the new array

    delete temp;
}
