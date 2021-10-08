#ifndef VECT_H_INCLUDED
#define VECT_H_INCLUDED
#include <iostream>

namespace VECTOR
{
class Vector
{
private:
    double x;
    double y;
public:
    enum Mode {REST, POL};
    Vector();
    Vector(double n1, double n2, Mode form = REST);
    void reset(double n1, double n2, Mode form = REST);
    ~Vector(){};
    double magval() const;
    double angval() const;
    void polar_mode();
    void rect_mode();
    Vector operator+(const Vector & b) const;
    Vector operator-(const Vector & b) const;
    Vector operator-() const;
    Vector operator*(double n) const;
    friend Vector operator*(double n, const Vector & a);
    friend std::ostream & operator<<(std::ostream & os, const Vector & v);
private:
    Mode mode;

};
}


#endif // VECT_H_INCLUDED
