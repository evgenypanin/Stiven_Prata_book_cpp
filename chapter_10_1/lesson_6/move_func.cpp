#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
	m_x = a;
	m_y = b;
}

void Move::showmove() const
{
	std::cout << "\nX = " << m_x
		  << "\nY = " << m_y << std::endl;
}

Move Move::add(const Move & m)
{
	m_x += m.m_x;
	m_y += m.m_y;
	return *this;
}

void Move::reset(double a, double b)
{
	m_x = a;
	m_y = b;
}

