#include <iostream>
#include "linkedlist.h"
using namespace std;

// public member functions
void LinkedList::insert(int pos, int data) {
    Node* newNode = new Node(data);

    // if the beginning of the list hasn't been initialized : add newNode
    if(pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* prev = get(pos - 1);

    if(prev == nullptr) {
        cout << "Error: Index does not exist" << endl;
        return;
    }

    newNode->next = prev->next;
    prev->next = newNode;
}
    
Node* LinkedList::get(int index) {
    Node* temp = head;
    int count = 0;

    // while temporary node is equal to something other than a nullptr : iterate through next 
    while (temp != nullptr) {
        if (count == index) {
            return temp;
        }
        temp = temp->next;
        count++; 
    }

    
    cout << "Error: The index is out of range. " << endl;
    return nullptr;
    
}

void LinkedList::add_beg(int data) {
    Node* newNode = new Node(data);
    newNode->next = this->head;
    head = newNode;
}

void LinkedList::del_beg() {
    if(head == nullptr) {
        cout << "Error: Cannot delete from empty list" << endl;
        return;
    }
    this->head = head->next;
}

void LinkedList::display() {
    if(head == nullptr) {
        cout << "Error: Cannot display empty list" << endl;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "END";
}


