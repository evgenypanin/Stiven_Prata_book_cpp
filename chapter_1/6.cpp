#include <iostream>

using namespace std;

double astr(double year);

int main()
{
	double year, ed;
	cout << "Enter the number of light years: ";
	cin >> year;
	ed = astr(year);
	cout << ed << " light years = " << ed << " astronomical units." << endl;
	return 0;

}

double astr(double year)
{
	return year * 63240;
}
