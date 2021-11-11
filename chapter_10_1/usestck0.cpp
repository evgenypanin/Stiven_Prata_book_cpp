#include <iostream>
#include "stock00.h"

int main()
{
	Stock fluffy;
	fluffy.acquire("NanoSmart", 20, 12.50);
	fluffy.show();
	fluffy.buy(15,18.125);
	fluffy.show();
	fluffy.sell(400,20.00);
	fluffy.show();
	fluffy.buy(300000, 40.125);
	fluffy.show();
	return 0;
}
