#include <iostream>
#include "node.h"

using namespace std;

Node::Node() {
   this->data = 0;
   this->next = nullptr;
}

Node::Node(int d) {
   this->data = d;
   this->next = nullptr;
}    


