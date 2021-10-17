#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<float, 3> sprint;
	float medium;
	cout << "Enter the test sprint time of 40 m: " << endl;
	cin >> sprint[0];
	cin >> sprint[1];
	cin >> sprint[2];
	medium = (sprint[0] + sprint[1] + sprint[2]) / 3;
	cout << "First result: " << sprint[0] << endl;
	cout << "Second result: " << sprint[1] << endl;
	cout << "Third result: " << sprint[2] << endl;
	cout << "Medium result: " << medium << endl;
	return 0;
}

