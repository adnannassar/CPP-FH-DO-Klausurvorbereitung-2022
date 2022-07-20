#include <iostream>
#include <string>

using namespace std;

class myExp : public std::invalid_argument
{
public:
    myExp(string msg) : invalid_argument(msg) {}
};

class Complex
{
private:
    int real, imaginär;

public:
    Complex(int real = 0, int imaginär = 0);
    Complex(const Complex &c);
    friend std::ostream &operator<<(std::ostream &out, const Complex &c);
    int operator[](unsigned index);
    Complex operator+(const Complex &c2);
    Complex operator++(int n);
    bool operator==(const Complex &c2);
    inline const int getReal() const { return this->real; }
    inline const int getImaginär() const { return this->imaginär; }
};