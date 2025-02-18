
#include <iostream>
#include "linkedlist.h"

LinkedList::LinkedList() : start(nullptr) {}

// public member functions
void LinkedList::add(int pos, int data) {
    Node n = get(pos - 1);

    
}

int LinkedList::get(int index) {
    Node* n = new Node(index);
    n->next = start;
    for (int i = 0; i < index; i++) {
        n->next = n;
    }
    
}

void LinkedList::add_beg(int) {

}

