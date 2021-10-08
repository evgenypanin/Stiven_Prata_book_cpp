#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
namespace COMPLEX
{
class Complex
{
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double r, double i);
    ~Complex(){};
    double real_val() const {return real;};
    double imaginary_val() const {return imaginary;};
    void set_real(double r) {real = r;};
    void set_imaginary(double i) {imaginary = i;};
    Complex operator+(const Complex & c) const;
    Complex operator-(const Complex & c) const;
    Complex operator*(const Complex & c) const;
    Complex operator*(double n) const;
    Complex operator~() const;
    friend Complex operator*(double n, const Complex & c) {return c * n;};
    friend std::ostream & operator<<(std::ostream & os, const Complex & c);
    friend std::istream & operator>>(std::istream & is, Complex & c);
};
}

#endif // COMPLEX0_H_
