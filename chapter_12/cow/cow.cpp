#include "cow.h"
#include <cstring>

Cow::Cow()
{
    weight = 0.0;
    hobby = new char[1];
    hobby[0] = '\0';
    name[0] = '\0';
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    weight = wt;
    std::strcpy(name, nm);
    int len = std::strlen(ho);
    hobby = new char[len + 1];
    std::strcpy(hobby, ho);
}

Cow::Cow(const Cow & co)
{
    int len = std::strlen(co.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, co.hobby);
    std::strcpy(name, co.name);
    weight = co.weight;
}

Cow::~Cow()
{
    std::cout << "Destruction\n";
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if (this == &c)
        return *this;
    delete [] hobby;
    int len = std::strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);
    std::strcpy(name, c.name);
    weight = c.weight;
}

void Cow::ShowCow() const
{
    std::cout << "Name: " << name << "\nHobby: " << hobby << "\nWeight: " << weight << std::endl;
}


