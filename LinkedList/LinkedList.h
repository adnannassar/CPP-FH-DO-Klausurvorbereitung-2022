#include "Node.h"

class LinkedList

{
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList &list);

    void add(int n);
    void remove(int n);
    void print();
    bool search(int n);
    bool isEmpty();
    void clear();
    Node *getHead()
    {
        return head;
    }

    inline void operator+=(LinkedList &list)
    {
        Node *ptr1 = head;
        while (ptr1->getNext() != nullptr)
        {
            ptr1 = ptr1->getNext();
        }
        ptr1->setNext(list.head);
    }
};
