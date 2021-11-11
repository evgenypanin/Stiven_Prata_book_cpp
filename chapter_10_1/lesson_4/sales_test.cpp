#include "sales.h"

int main()
{
	using namespace sales;

	double ar[] = {225056.55, 340742.15, 410123.35, 270521.25};
	Sales s1;
	s1 = Sales(ar, QUARTERS);
	s1.show_sales();

        s1.reset_sales();
	s1.set_sales();
	s1.show_sales();

	return 0;
}
