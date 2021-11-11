#include <iostream>
#include "plorg.h"
#include <cstring>

Plorg::Plorg(const char * name, int in)
{
	strcpy(m_fullname, name);
	m_index = in;
}

void Plorg::set_index()
{
	int temp;
	std::cout << "Enter the index plorga: ";
	std::cin >> temp;
	m_index = temp;
}

void Plorg::show_data() const
{
	std::cout << "\nName: " << m_fullname
		  << "\nIndex: " << m_index << std::endl;
}

