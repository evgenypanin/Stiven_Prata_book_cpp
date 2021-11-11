#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf()
{
}

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

Golf::~Golf()
{
}

int Golf::setgolf()
{
	using namespace std;
	int handicapcoin = 0;
	char name[Len];
	cout << "Enter the fullname golf person: ";
	cin.sync();
	cin >> name;
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

