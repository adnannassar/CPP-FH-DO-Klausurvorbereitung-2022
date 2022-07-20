#include "Complex.h"




Complex::Complex(int real, int imaginär) : real(real), imaginär(imaginär)
{
}
Complex::Complex(const Complex &orig) : Complex()
{
    this->real = orig.real;
    this->imaginär = orig.imaginär;
}
std::ostream &operator<<(std::ostream &out, const Complex &c)
{
    out << c.getReal() << "+" << c.getImaginär() << "i";
    return out;
}

Complex Complex::operator+(const Complex &c2)
{
    return Complex(this->real + c2.real, this->imaginär + c2.imaginär);
}

Complex Complex::operator++(int n)
{
    Complex c;
    c.real++;
    return c;
}

bool Complex::operator==(const Complex &c2)
{
    return this->real == c2.real && this->imaginär == c2.imaginär;
}
int Complex::operator[](unsigned index)
{
    if (index == 0)
    {
        return real;
    }
    else if (index == 1)
    {
        return imaginär;
    }
    else
    {
        throw myExp("Index muss zweischen 1 und 2 sein!");
    }
}
