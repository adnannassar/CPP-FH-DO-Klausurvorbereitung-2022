#include <iostream>
#include "Complex.h"

int main()
{
    Complex c1;
    Complex c2(2, 5);

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    Complex c3 = c1 + c2;

    std::cout << "c3: " << c3++ << std::endl;

    std::cout << "c3: " << c3 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    std::cout << "result: c3 == c2 ? " << (c3 == c2) << std::endl;
    std::cout << c2.getReal() << std::endl;
    try
    {
        std::cout << c2[3] << std::endl;
    }
    catch (myExp ex)
    {
        std::cout << ex.what() << std::endl;
    }

    std::cout << c2.getImaginär() << std::endl;

    try
    {
        std::cout << c2[1] << std::endl;
    }
    catch (myExp ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return 1;
}