#ifndef WINE_H_INCLUDED
#define WINE_H_INCLUDED
#include <iostream>
#include <string>
#include <utility>
#include <valarray>

using std::string;
using std::pair;
using std::cout;
using std::endl;
using std::cin;
typedef std::valarray<int> ArrayInt;
typedef pair<ArrayInt, ArrayInt> PairArray;


class Wine
{
private:
    string wine_name;
    PairArray pair_wine;
    int year;
public:
    Wine() : wine_name("null"), pair_wine(), year(0) {}
    Wine(const string & s, int y, std::valarray<int> yr, std::valarray<int> bot) : wine_name(s), pair_wine(yr, bot), year(y) {}
    Wine(const string & s, int y) : wine_name(s), year(y), pair_wine() {}
    string & Label() { return wine_name;}
    void GetBottles();
    void Show() const;
    int sum();
};

void Wine::GetBottles()
{
    std::valarray<int> a(year);
    std::valarray<int> b(year);
    for (int i = 0; i < year; i++)
    {
        cout << "Enter year: ";
        cin >> a[i];
        cout << "Enter bottles for that year: ";
        cin >> b[i];
    }
    pair_wine.first = a;
    pair_wine.second = b;
}

void Wine::Show() const
{
    cout << "Wine: " << wine_name << endl;
    cout << "\t " << "Year\t" << "Bottles\n";
    for (int i = 0; i < year; i++)
    {
        cout << "\t " << pair_wine.first[i] << "\t" << pair_wine.second[i] << endl;
    }
}

int Wine::sum()
{
    int summa = 0;
    for (int i = 0; i < year; i++)
    {
        summa += pair_wine.second[i];
    }
    return summa;
}

#endif // WINE_H_INCLUDED
