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
	CandyBar *snack = new CandyBar;
	cout << "Enter the name: ";
	cin.getline(snack->name, 20);
	cout << "Enter the weight: ";
	cin >> snack->weight;
	cout << "Enter the ccal: ";
	cin >> snack->ccal;
	cout << "Name: " << snack->name << endl;
	cout << "Weight: " << snack->weight << endl;
	cout << "Ccal: " << snack->ccal << endl;
	return 0;
}
