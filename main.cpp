#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {

    LinkedList list;
    list.insert(0, 5);
    list.insert(1, 10);
    list.insert(2, 15);
    list.insert(3, 20);

    // adding data to linked list and displaying contents
    cout << "\nThe linked list is: ";
    list.display();

    // Deleting first node from linked list : data = 5 : 10->15->20
    cout << "\n\nAfter deleting first node (data = 5) from linked list, the list is: ";
    list.del_beg();
    list.display();

    // Adding new node to beginning of linked list : data = 7 : 7->10->15->20
    cout << "\nAfter adding first node (data = 7) from linked list, the list is: ";
    list.add_beg(7);
    list.display();

    // Inserting new node in index 2 between 10 and 15 : data = 12 : 7->10->12->15->20
    cout << "\nNow we want to insert a node in index 2 (data = 12) into the linked list, the list is: ";
    list.insert(2, 12);
    list.display();

    cout << "\n" << endl;
    

    return 0;
}