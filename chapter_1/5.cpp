#include <iostream>

using namespace std;

double temp_far(double cel);

int main()
{
	double cel, far;
	cout << "Please enter a Clesius value: ";
	cin >> cel;
	far = temp_far(cel);
	cout << cel << " degrees Celsius is " << far << " degrees Fahrenheit" << endl;
	return 0;
}

double temp_far(double cel)
{
	return 1.8 * cel + 32;
}

