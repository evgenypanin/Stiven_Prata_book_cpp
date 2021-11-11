#include <iostream>
#include <string>
#include <cstring>
#include "personhead.h"

Person::Person()
{
	lname = "";
	fname[0] = '\0';
}

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	std::cout << lname << " " << fname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << fname << " " << lname << std::endl;
}
