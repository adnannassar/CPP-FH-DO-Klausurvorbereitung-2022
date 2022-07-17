#include <iostream>
#include "LinkedList.h"

std::ostream &operator<<(std::ostream &out, LinkedList list)
{
    if (list.isEmpty())
    {
        out << "List is empty";
    }
    else
    {
        Node *pointer = list.getHead();
        while (pointer != NULL)
        {
            out << pointer->getData() << " ";
            pointer = pointer->getNext();
        }
    }
    return out;
}

int main()
{

    LinkedList list;

    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    list.add(6);
    list.add(7);

    LinkedList list2(list);
    std::cout << list << std::endl;

    LinkedList list3;
    LinkedList list4;

    list3.add(10);
    list3.add(20);
    list3.add(30);
    list3.add(40);

    list4.add(50);
    list4.add(60);
    list4.add(70);
    list4.add(80);

    list3 += list4; // erwartet: list3: 10 20 30 40 50 60 70 80
                    // erwartet: list4: 50 60 70 80
    std::cout << list3 << std::endl;
    // LinkedList list5 = list3 + list4; // erwartet: list3: 10 20 30 40
    //  erwartet: list4: 50 60 70 80
    //  erwartet: list5: 10 20 30 40 50 60 70 80

    return 1;
}
