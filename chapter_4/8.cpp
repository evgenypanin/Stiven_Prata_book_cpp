#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Pizza
{
	string name;
	int diametr;
	float weight;
};

int main()
{
	Pizza *toast = new Pizza;
	cout << "Enter the diametr pizza: ";
	cin >> toast->diametr;
	cin.get();
	cout << "Enter the name company: ";
	getline(cin, toast->name);
	cout << "Enter the weight pizza: ";
	cin >> toast->weight;
	cout << "Name company: " << toast->name << endl;
	cout << "Diametr pizza: " << toast->diametr << endl;
	cout << "Weight pizza: " << toast->weight << endl;
	return 0;
}
