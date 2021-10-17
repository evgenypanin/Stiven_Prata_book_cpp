#include <iostream>

int main()
{
	using namespace std;
	long seconds;
	int days, hours, minutes, sec;
	const int coef_minut = 60;
	const int coef_hour = 3600;
	const int coef_day = 86400;
	cout << "Enter the number of seconds: _\b";
	cin >> seconds;
	days = seconds / coef_day;
	hours = (seconds % coef_day) / coef_hour;
	minutes = ((seconds % coef_day) % coef_hour) / coef_minut;
	sec = (((seconds % coef_day) % coef_hour) % coef_minut);
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds" << endl;
	return 0;
}
