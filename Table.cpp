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
    int iter = 0;
    if(table[key] != NULL) { //if the value is NULL
        Node* newnode = new Node(stu);
        while(table[key]->getNext() != NULL) {
            table[key] = table[key]->getNext();
            iter += 1;
        }
        table[key]->setNext(newnode);
    } else { //if the value is NOT NULL
        table[key] = new Node(stu);
    }
    if(iter > 3) rehash();
}

///search for a student and print their information if found
void Table::PRINT(int id) {
    int key = id % size;
    while(table[key] != NULL) {
        if(table[key]->getValue()->getId() == id) {
            cout << table[key]->getValue()->getFirst() << " ";
            cout << table[key]->getValue()->getLast() << endl;
            cout << "gpa: " << table[key]->getValue()->getGpa() << endl;
            cout << "key: " << key << endl;
            cout << "id: " << id << "\n" << endl;
            return;
        } else {
            table[key] = table[key]->getNext();
        }
    }
    cout << "not found" << endl;
}

///search for a student and delete their data if found
void Table::DELETE() {
}

///rehash the table
void Table::rehash() {
    cout << "rehash!" << endl;
    int old = size;
    size *= 2;
    Node** temp = table;
    table = new Node*[size];
    for(int i; i < size; i++) {
        table[i] = NULL;
    }

    for(int i = 0; i < old; i++) {
        while(temp[i] != NULL) {
            Student* val = temp[i]->getValue();
            int key = val->getId() % size;
            Node* newnode = new Node(val);
            if(table[key] != NULL) { //if the value is NULL
                Node* newnode = new Node(val);
                while(table[key]->getNext() != NULL) {
                    table[key] = table[key]->getNext();
                }
                table[key]->setNext(newnode);
            } else { //if the value is NOT NULL
                table[key] = new Node(val);
            }
        }
    }
    delete temp;
}
