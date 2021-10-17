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
	CandyBar snack[3];
	cout << "Enter name chocolate: " << endl;
	cin.getline(snack[0].name, 20);
	cin.getline(snack[1].name, 20);
	cin.getline(snack[2].name, 20);
	cout << "Enter weight chocolate: " << endl;
	cin >> snack[0].weight;
	cin >> snack[1].weight;
	cin >> snack[2].weight;
	cout << "Enter ccal chocolate: " << endl;
        cin >> snack[0].ccal;
        cin >> snack[1].ccal;
        cin >> snack[2].ccal;
        cout << "Name: " << snack[0].name << ", " << snack[1].name << ", " << snack[2].name << endl;
        cout << "Weight: " << snack[0].weight << ", " << snack[1].weight << ", " << snack[2].weight << endl;
        cout << "Ccal: " << snack[0].ccal << ", " << snack[1].ccal << ", " << snack[2].ccal << endl;
        return 0;
}	
