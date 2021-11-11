#ifndef LIST_H_
#define LIST_H_
#include <string>

typedef std::string Item;

class List
{
private:
	enum {MAX = 4};
	Item items[MAX];
	int top;
public:
	List();
	bool isempty();
	bool isfull();
	void add(const Item & item);
	void visit( void (*pf)(Item &));
	void show_list();
	void reset_list();
};

#endif
