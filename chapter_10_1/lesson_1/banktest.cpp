#include <iostream>
#include <string>
#include <cctype>
#include "bankcoin.h"

const int STKS = 4;

int main()
{
	Bank active[STKS] = {
		Bank("John Rogan", "410001", 325.230),
		Bank("Lui Ferou", "410002", 12354.324),
		Bank("Greg Morino", "410003", 4500.324),
		Bank("John Freeman", "410004", 2400.12)
	};
	int i, j;
	double n;
	char ch;
	for (i = 0; i < STKS; i++)
		active[i].show();
	std::cout << "Enter a character for case bank person (U - up to balance, D - down to balance) or q to quit\n";
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		switch (ch)
		{
			case 'U':
			case 'u':
				for (i = 0; i < STKS; i++)
					std::cout << "#" << i << " person" << std::endl;
				std::cout << "Enter the number coin for name person: ";
				std::cin >> j;
				std::cout << "Enter the coins to up to balance person: ";
				std::cin >> n;
				active[j].up_to_balance(n);
				active[j].show();
				break;
			case 'D':
			case 'd':
				for (i = 0; i < STKS; i++)
					std::cout << "#" << i << " person" << std::endl;
				std::cout << "Enter the number coin for name person: ";
				std::cin >> j;
				std::cout << "Enter the coins to down to balance person: ";
				std::cin >> n;
				active[j].down_to_balance(n);
				active[j].show();
				break;
		}
		std::cout << "Enter a character for case bank person (U - up to balance, D - down to balance) or q to quit\n";
	}
	std::cout << "Bye\n";
	return 0;
				



}
