#include <iostream>
#include <string>
#include "personhead.h"

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	std::cout << std::endl;
	one.FormalShow();
	two.Show();
	three.Show();
	return 0;
}
