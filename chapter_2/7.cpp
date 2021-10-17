#include <iostream>

int main()
{
	using namespace std;
	float litr, km;
	float gallon, mil;
	float coef_mil = 62.14;
	float coef_gallon = 3.875;
	cout << "Enter litr:  \b";
	cin >> litr;
	cout << "Enter km:  \b";
	cin >> km;
	mil = coef_mil / (km * 100);
	gallon = coef_gallon / litr;
	cout << mil << endl << gallon << endl;
}
