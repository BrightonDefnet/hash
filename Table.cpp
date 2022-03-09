#include "Table.h"

Table::Table() {}

///add a new student to the table
bool Table::ADD() {
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
    
    //create a new node and get the key
    Student* stu = new Student(first, last, id, gpa);
    Node* temp = new Node(stu);
    int tempid = id;
    while(tempid >= 100) tempid /= 10; //get first 2 digits of the id
    
    //insert the new node
    if(current == 1) {
        if(sizeOne[tempid] == nullptr) { //if the index is empty
            sizeOne[tempid] = temp;
            cout << "\nvalues at this key: 0" << endl;
            return true;
        } else { //if the index is NOT empty
            int i = 1;
            Node* tempNode = sizeOne[tempid];
            while(tempNode->getNext() != NULL) {
                tempNode = tempNode->getNext();
                i++;
            }
            tempNode->setNext(temp);
            cout << "\nvalues at this key: " << i << endl;
            return true;
        }
    } else {
        return false;
    }
}

///search for a student and print their information if found
bool Table::PRINT(int stid) {
    //get the key and travel to it
    int tempid = stid;
    bool found = false;
    bool running = true;
    while(tempid >= 100) tempid /= 10;
    Node* temp = sizeOne[tempid]; //go to the key
    
    //search for the student id
    do {
        if(temp->getValue()->getId() == stid) { //if found
            return true;
        } else { //if not found
            if(temp->getNext() != NULL) { //if not the last value
                temp = temp->getNext();
            } else {
                running = false;
            }
        }
    } while(running == true);

    return false;
}

bool Table::DELETE(int stid) {
    return false;
}
