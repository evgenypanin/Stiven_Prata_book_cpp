#include <iostream>

using namespace std;

void time(int hour, int minute);

int main()
{
	int hour, minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	time(hour, minute);
	return 0;
}

void time(int hour, int minute)
{
	cout << "Time " << hour << ":" << minute << endl;
}
