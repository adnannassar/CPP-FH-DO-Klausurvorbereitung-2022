#include <iostream>

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data, Node *next);
    ~Node();
    int getData();
    inline void setData(int data) { this->data = data; }
    inline Node *getNext() { return next; }
    void setNext(Node* next);
};
