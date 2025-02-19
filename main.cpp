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
    cout << "\n\nAfter deleting first node from linked list, the data is: ";
    list.del_beg();
    list.display();
    

    return 0;
}