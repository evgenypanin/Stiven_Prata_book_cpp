#include "cddisk.h"
#include <cstring>

Cd::Cd(char * s1, char * s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers) + 1];
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char * f, char * s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
    film_name = new char[std::strlen(f) + 1];
    std::strcpy(film_name, f);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    film_name = new char[std::strlen(c.film_name) + 1];
    std::strcpy(film_name, c.film_name);
}

Classic::~Classic()
{
    delete [] film_name;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "Film name: " << film_name << std::endl;
}

Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;
    Cd::operator=(c);
    delete [] film_name;
    film_name = new char[std::strlen(c.film_name) + 1];
    std::strcpy(film_name, c.film_name);
    return *this;
}
