#include <iostream>

int main()
{
	using namespace std;
	double km, oil, zatr;
	cout << "Enter the oil litr: " << endl;
	cin >> oil;
	cout << "Enter the km count: " << endl;
	cin >> km;
	zatr = oil / km;
	cout << "Zatrata: " << zatr << endl;
        return 0;
}	

