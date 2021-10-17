#include <iostream>

int main()
{
	using namespace std;
	const int koef = 12;
	int fut, dyum;
	cout << "Enter the input dyum:" << endl;
	cin >> dyum;
	fut = dyum / koef;
	cout << dyum << " dyum ravno " << fut << " fut" << endl;
}

