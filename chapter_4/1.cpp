#include <iostream>
#include <cstring>
using namespace std;

struct human
{
	char first_name[20];
	char last_name[20];
	char grade[10];
	int age;
};

int main()
{
	human question;
	cout << "What is your first name? ";
	cin.get(question.first_name, 20);
	cin.get();
	cout << "What is your last name? ";
	cin.get(question.last_name, 20);
	cin.get();
	cout << "What letter grade do you deserve? ";
	cin.get(question.grade, 10);
	cout << "What is your age? ";
	cin >> question.age;
	cout << "Name: " << question.last_name << ", " << question.first_name << endl;
	cout << "Grade: " << question.grade << endl;;
	cout << "Age: " << question.age << endl;
	return 0;
}
