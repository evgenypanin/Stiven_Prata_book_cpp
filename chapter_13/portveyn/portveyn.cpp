#include "portveyn.h"
#include <cstring>

Port::Port(const char * br, const char * st, int b)
{
    brand = new char[std::strlen(br) + 1];
    style = new char[std::strlen(st) + 1];
    std::strcpy(brand, br);
    std::strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p)
{
    brand = new char[std::strlen(p.brand) + 1];
    style = new char[std::strlen(p.style) + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port::~Port()
{
    delete [] brand;
    delete [] style;
}

Port & Port::operator=(const Port & p)
{
    if (this == &p)
        return *this;
    delete [] brand;
    delete [] style;
    brand = new char[std::strlen(p.brand) + 1];
    style = new char[std::strlen(p.style) + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    bottles -= b;
    return *this;
}

void Port::Show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort(const char * br, const char * st, int b, const char * nn, int y) : Port(br, st, b)
{
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort() : Port()
{
    nickname = "none";
    year = 0;
}

VintagePort::VintagePort(const VintagePort & vt) : Port(vt)
{
    nickname = new char[std::strlen(vt.nickname) + 1];
    std::strcpy(nickname, vt.nickname);
    year = vt.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vt)
{
    if (this == &vt)
        return *this;
    Port::operator=(vt);
    delete [] nickname;
    nickname = new char[std::strlen(vt.nickname) + 1];
    std::strcpy(nickname, vt.nickname);
    year = vt.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << ", " << "Year: " << year << std::endl;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vt)
{
    os << vt.nickname << ", " << vt.year << "\n";
    return os;
}
