#include <iostream>
#include "stack.h"
#include <string>

class Person
{
private:
    std::string name;

public:
    Person(std::string name) : name(name) {}
    std::string getName(){return name;}
};

int main()
{
    Stack<std::string> c;
    c.push("Badr");
    c.push("Bashar");
    c.push("Mahmoud");
    
    std::cout << c.pop()<< std::endl;
    std::cout << c.pop()<< std::endl;
    std::cout << c.pop()<< std::endl;
    std::cout << c.pop()<< std::endl;

    return 1;
}