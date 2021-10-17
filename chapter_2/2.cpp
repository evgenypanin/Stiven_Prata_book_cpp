#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	const double coef_dyum = 12;
	const double metr = 0.0254;
	const double kg = 2.2;
	double rost_fut, rost_dyum, ves_funt, bmi, rost_metr, massa;
	cout << "Enter rost_fut: \n";
	cin >> rost_fut;
	cout << "Enter ves_funt:\n";
	cin >> ves_funt;
	rost_dyum = rost_fut * coef_dyum;
	rost_metr = rost_dyum * metr;
	massa = ves_funt / kg;
	bmi = massa / pow(rost_metr, 2);
	cout << bmi << " body mass index\n";
	return 0;
}




