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
    pounds = stn * Lbs_per_stn;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

double min_pounds(const Stonewt * s, int n)
{
    double minValue = s[0].pounds;
    for (int i = 1; i < n; i++)
    {
        if (minValue > s[i].pounds)
            minValue = s[i].pounds;
    }
    return minValue;
}

double max_pounds(const Stonewt * s, int n)
{
    double maxValue = s[0].pounds;
    for (int i = 1; i < n; i++)
    {
        if (maxValue < s[i].pounds)
            maxValue = s[i].pounds;
    }
    return maxValue;
}

int average_stone(const Stonewt * s, int n, int m)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        if (s[i].stone >= m)
            count++;
    }
    return count;
}

bool operator==(const Stonewt & s, const Stonewt & t)
{
    return s.pounds == t.pounds;
}

bool operator!=(const Stonewt & s, const Stonewt & t)
{
    return s.pounds != t.pounds;
}

bool operator>(const Stonewt & s, const Stonewt & t)
{
    return s.pounds > t.pounds;
}

bool operator<(const Stonewt & s, const Stonewt & t)
{
    return s.pounds < t.pounds;
}

bool operator>=(const Stonewt & s, const Stonewt & t)
{
    return s.pounds >= t.pounds;
}

bool operator<=(const Stonewt & s, const Stonewt & t)
{
    return s.pounds <= t.pounds;
}
