#include "stock12.h"

Stock::Stock()
{
    len = 4;
    company = new char[1];
    company[0] = '\0';
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const char * co, long n, double pr)
{
    len = std::strlen(co);
    company = new char[len + 1];
    std::strcpy(company, co);
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    delete [] company;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

std::ostream & operator<<(std::ostream & os, const Stock & s)
{
    os << "Company: " << s.company
       << " Shares: " << s.shares << std::endl;
    os << " Share Price: $" << s.share_val;
    os << " Total Worth: $" << s.total_val << std::endl;
    return os;
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
