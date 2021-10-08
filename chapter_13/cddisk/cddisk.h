#ifndef CDDISK_H_INCLUDED
#define CDDISK_H_INCLUDED
#include <iostream>

class Cd
{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char * film_name;
public:
    Classic(char * film_name, char * s1, char * s2, int n, double x);
    Classic(const Classic & c);
    ~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic & c);
};
#endif // CDDISK_H_INCLUDED
