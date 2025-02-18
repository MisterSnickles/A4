#pragma once
#include "node.h"

class LinkedList : public Node {

public:
    Node* start;    
    
public:
    // Constructor
    LinkedList(int);
    LinkedList();

    // Member Function Prototypes
    void add(int, int);
    int get(int);
    void add_beg(int);
    void del_beg();
    void append(int);
};