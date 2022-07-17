#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
    // std::cout << "LinkedList Kostruktor" << std::endl;
}

LinkedList::LinkedList(const LinkedList &orig) : LinkedList()
{
    Node *ptr = orig.head;
    while (ptr != nullptr)
    {
        this->add(ptr->getData());
        ptr = ptr->getNext();
    }
}
LinkedList::~LinkedList()
{
    // clear();
    //  std::cout << "LinkedList Destruktor" << std::endl;
}

void LinkedList::add(int n)
{
    Node *newNode = new Node(n, nullptr);
    if (newNode != nullptr)
    {
        if (isEmpty())
        {
            head = newNode;
        }
        else
        {
            Node *pointer = head;
            while (pointer->getNext() != NULL)
            {
                pointer = pointer->getNext();
            }
            pointer->setNext(newNode);
        }
    }
    else
    {
        printf("Error!\n");
    }
}
void LinkedList::remove(int n)
{
}
void LinkedList::print()
{
    if (isEmpty())
    {
        std::cout << "List is empty\n"
                  << std::endl;
    }
    else
    {
        Node *pointer = head;
        while (pointer != NULL)
        {
            std::cout << pointer->getData() << " ";
            pointer = pointer->getNext();
        }
    }
}
bool LinkedList::search(int n)
{
    return false;
}
bool LinkedList::isEmpty()
{
    return head == nullptr;
}
void LinkedList::clear()
{
    if (!isEmpty())
    {

        Node *pointer = head;
        Node *toBeDeleted = nullptr;
        while (pointer != NULL)
        {
            toBeDeleted = pointer;
            pointer = pointer->getNext();
            delete toBeDeleted;
        }
    }
}