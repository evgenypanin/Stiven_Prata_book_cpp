#include "stack.h"
#include "Customer.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::is_empty()
{

	return top == 0;
}

bool Stack::is_full()
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
