#include <iostream>

int main()
{
	using namespace std;
	double degrees;
	int minutes, seconds;
	const int deg_seconds = 60;
	const int deg_minutes = 60;
	cout << "Enter a latitude in degrees, minutes, and seconds: \n";
	cin >> degrees;
	cin >> minutes;
	cin >> seconds;
	cout << "First, enter the degrees: " << int (degrees) << endl;
	cout << "Next, enter the minutes of arc: " << minutes << endl;
	cout << "Finally, enter the seconds of arc: " << seconds << endl;
	cout << int (degrees) << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees << " degrees" << endl;
	return 0;
}

