#ifndef STACK_H_
#define STACK_H_

#include "Customer.h"

typedef Customer Item;

class Stack
{
private:
	enum {MAX = 10};
	Item items[MAX];
	int top;
public:
	Stack();
	bool is_empty();
	bool is_full();
	bool push(const Item & item);
	bool pop(Item & item);
};

#endif

