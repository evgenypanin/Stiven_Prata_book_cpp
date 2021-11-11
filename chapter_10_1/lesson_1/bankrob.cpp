#include <string>
#include <iostream>
#include "bankcoin.h"

Bank::Bank()
{
	name_person = "no name";
	number_coin = "no coin";
	balance = 0.0;
}

Bank::Bank(const std::string & m_name, const std::string & m_coin, double bal)
{
	name_person = m_name;
	number_coin = m_coin;
	if (bal < 0)
	{
		std::cout << "Balance person " << name_person << " set to 0\n";
		balance = 0;
	}
	else
		balance = bal;
}

Bank::~Bank()
{
}

void Bank::up_to_balance(double prime)
{
	if (prime < 0)
		std::cout << "Error minus balance\n";
	else
		balance += prime;
}

void Bank::down_to_balance(double prime)
{
	if (prime < 0)
		std::cout << "Error minus balance\n";
	else if (prime > balance)
		std::cout << "Balance minimum\n";
	else
		balance -= prime;
}

void Bank::show() const
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Name: " << name_person
	     << " Nubmer coin: " << number_coin << '\n'
	     << " Balance: " << balance << std::endl;
	cout.precision(2);
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
