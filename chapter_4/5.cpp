#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar
{
	char name[20];
	float weight;
	int ccal;
};

int main()
{
	CandyBar snack;
	cout << "Enter chocolate name: ";
	cin.getline(snack.name, 20);
	cout << "Enter weight cholocate: ";
	cin >> snack.weight;
	cout << "Enter cholocate ccal: ";
	cin >> snack.ccal;
	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Ccal: " << snack.ccal << endl;
	return 0;
}
