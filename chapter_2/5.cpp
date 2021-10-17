#include <iostream>

int main()
{
	using namespace std;
	long long all_count, all_usa;
	double procent;
	cout << "E ter the world`s population: \b";
	cin >> all_count;
	cout << "Enter the population of the US: \b";
	cin >> all_usa;
	procent = all_usa / all_count;
	cout << "The population of the US is " << procent << " of the world population." << endl;
       return 0;
}       
