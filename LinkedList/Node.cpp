#include "Node.h"

Node::Node(int data, Node *next) : data(data), next(next)
{
   // std::cout << "Node Kostruktor" << std::endl;
}
Node::~Node()
{
   // std::cout << "Node Destruktor" << std::endl;
}

int Node::getData()
{
    return data;
}
void Node::setNext(Node *next)
{
    this->next = next;
}