#include "wine.h"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::valarray;
    cout << "Enter name of wine: ";
    std::string lab;
    getline(cin, lab);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;
    Wine holding(lab, yrs);
    holding.GetBottles();
    holding.Show();
    const int YRS = 3;
    valarray<int> y = {1993, 1995, 1998};
    valarray<int> b = {48, 60, 72};
    string s = "Gushing Grape Red";
    Wine more(s, YRS, y, b);
    more.Show();
    cout << "Total bottle for " << more.Label()
         << ": " << more.sum() << endl;
    cout << "Bye\n";
    return 0;
}
