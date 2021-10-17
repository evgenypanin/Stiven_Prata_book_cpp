#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int months = 12;
    int a, summ;
    array<string, months> m = {"jan", "feb", "mart", "apr", "may", "june", "july", "aug", "sep", "oct", "noya", "dec"};
    array<int, months> n;
    for (int i = 0; i < months; i++)
    {
        cout << m[i] << " month: ";
        cin >> a;
        n[i] += a;
    }

    for (int i = 0; i < months; i++)
    {
        summ += n[i];
    }
    cout << "All summa of year = " << summ << " books" << endl;
    return 0;
}
