#ifndef STONEWT_H_INCLUDED
#define STONEWT_H_INCLUDED
#include <iostream>

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    enum {MAX = 6};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt(){};
    friend double min_pounds(const Stonewt * s, int n = MAX);
    friend double max_pounds(const Stonewt * s, int n = MAX);
    friend int average_stone(const Stonewt * s, int n = MAX, int m = 11);
    friend bool operator==(const Stonewt & s, const Stonewt & t);
    friend bool operator>(const Stonewt & s, const Stonewt & t);
    friend bool operator<(const Stonewt & s, const Stonewt & t);
    friend bool operator>=(const Stonewt & s, const Stonewt & t);
    friend bool operator<=(const Stonewt & s, const Stonewt & t);
    friend bool operator!=(const Stonewt & s, const Stonewt & t);
};


#endif // STONEWT_H_INCLUDED
