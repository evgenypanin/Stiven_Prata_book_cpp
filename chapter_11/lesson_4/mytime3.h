#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time operator+(const Time & v, const Time & t);
    friend Time operator-(const Time & v, const Time & t);
    friend Time operator*(double n, const Time & t);
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};


#endif // MYTIME3_H_
