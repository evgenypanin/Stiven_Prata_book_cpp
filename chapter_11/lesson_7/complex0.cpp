#include "complex0.h"
#include <iostream>
using namespace std;
namespace COMPLEX
{
Complex::Complex()
{
    real = imaginary = 0.0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imaginary = i;
}

Complex Complex::operator+(const Complex & c) const
{
    Complex sum;
    sum.real = real + c.real;
    sum.imaginary = imaginary + c.imaginary;
    return sum;
}

Complex Complex::operator-(const Complex & c) const
{
    Complex diff;
    diff.real = real - c.real;
    diff.imaginary = imaginary - c.imaginary;
    return diff;
}

Complex Complex::operator*(const Complex & c) const
{
    Complex mul;
    mul.real = real * c.real - imaginary * c.imaginary;
    mul.imaginary = real * c.imaginary + imaginary * c.real;
    return mul;
}

Complex Complex::operator~() const
{
    return Complex(-real, imaginary);
}

Complex Complex::operator*(double n) const
{
    return Complex(n * real, n * imaginary);
}

std::ostream & operator<<(std::ostream & os, const Complex & v)
{
    os << "(" << v.real << "," << v.imaginary << "i)\n";
    return os;
}

std::istream & operator>>(std::istream & is, Complex & v)
{
    std::cout << "real: ";
    is >> v.real;
    std::cout << "imaginary: ";
    is >> v.imaginary;
    return is;
}
}
