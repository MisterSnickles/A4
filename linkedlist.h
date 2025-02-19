#include "node.h"

// LinkedList class is used to manage and alter linked list if needed
class LinkedList : public Node {

public:
    Node* head;    
    
public:

    // Constructor and Destructor ----------------------------------------
    LinkedList() {
        head = nullptr;
    }

    ~LinkedList() {
        std::cout << "List Destructor Called" << std::endl;
    }
    

    // Member Function Prototypes ----------------------------------------
    // add data at a certain location in linked list
    void insert(int, int); // data, location

    // return a node pointer in linkedlist
    Node* get(int); // data

    // add to beginning of linkedlist
    void add_beg(int); // data

    // delete the beginning of linkedlist
    void del_beg();

    // display linked list data
    void display();
};