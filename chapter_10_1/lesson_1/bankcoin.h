#ifndef BANKCOIN_H_
#define BANKCOIN_H_

#include <string>

class Bank
{
private:
	std::string name_person;
	std::string number_coin;
	double balance;
public:
	Bank();
	Bank(const std::string & m_name, const std::string & m_coin, double bal);
	~Bank();
	void show() const;
	void up_to_balance(double prime);
	void down_to_balance(double prime);
};

#endif
