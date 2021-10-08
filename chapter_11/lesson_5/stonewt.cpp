#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt Stonewt::operator+(const Stonewt & s) const
{
    Stonewt sum;
    sum.stone = stone + s.stone;
    sum.pds_left = pds_left + s.pds_left;
    sum.pounds = pounds + s.pounds;
    return sum;
}

Stonewt Stonewt::operator-(const Stonewt & s) const
{
    Stonewt diff;
    diff.stone = stone - s.stone;
    diff.pds_left = pds_left - s.pds_left;
    diff.pounds = pounds - s.pounds;
    return diff;
}

Stonewt Stonewt::operator*(double n)
{
    stone *= int(n);
    pds_left *= n;
    pounds *= n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    os << s.stone << " stone, " << s.pds_left << " pounds\n";
    os << s.pounds << " pounds\n";
}
