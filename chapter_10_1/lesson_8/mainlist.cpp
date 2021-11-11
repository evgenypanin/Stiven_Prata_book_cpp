#include <iostream>
#include "list.h"
#include <cstring>

int main()
{
	using std::cout;
	using std::cin;

	List some;

	std::string phrase[] =
	{
		"Black",
		"Led",
		"Deep",
		"Uriah",
		"Pink",
		"Iron",
		"Judas"
	};

	if (some.isempty())
	{
		for (int i = 0; !some.isfull(); i++)
			some.add(phrase[i]);
	}

	some.show_list();
	some.reset_list();
	return 0;
}
