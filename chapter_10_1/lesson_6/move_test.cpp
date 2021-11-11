#include "move.h"

int main()
{
	Move dog(2.2, 3.3);
	dog.showmove();

	dog.add(dog);
	dog.showmove();

	dog.reset();
	dog.showmove();

	dog.reset(100.0, 200.0);
	dog.showmove();

	Move cat(10.0, 20.0);
	cat.showmove();

	cat.add(dog);
	cat.showmove();

	return 0;
}
