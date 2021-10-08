#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf()
{
    fullname = "no name";
    handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

int Golf::setgolf()
{
    using namespace std;
    int handicapcoin = 0;
    char name[Len];
    cout << "Enter the fullname golf person: ";
    cin.sync();
    cin >> fullname;
    if (strlen(name) > 0)
    {
        handicapcoin = 1;
        cout << "Enter the handicap golf person: ";
        cin >> handicap;
        Golf temp(name, handicap);
        *this = temp;
    }
    return handicapcoin;
}

void Golf::showgolf() const
{
    std::cout << "Name golf person: " << fullname
              << "\nHandicap: " << handicap << std::endl;
}
