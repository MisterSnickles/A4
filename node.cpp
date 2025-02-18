#include <iostream>
#include "node.h"

using namespace std;

Node::Node() {
   this->data = 0;
   this->next = nullptr;
}

Node::Node(int d) : data(d) {}

Node::Node(int d, int n) : data(d), next(nullptr) {}

