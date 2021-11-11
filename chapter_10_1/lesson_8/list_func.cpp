#include <iostream>
#include "list.h"

List::List()
{
	top = 0;
}

bool List::isempty()
{
	return top == 0;
}

bool List::isfull()
{
	return top == MAX;
}

void List::add(const Item & item)
{
	if (top < MAX)
		items[top++] = item;
}

void List::visit(void (*pf)(Item &))
{
	for (int i = 0; i < MAX; i++)
		pf(items[i]);
}

void List::show_list()
{
	for (int i = 0; i < MAX; i++)
		std::cout << items[i] << std::endl;
	std::cout << std::endl;
}

void List::reset_list()
{
	top = 0;
}
