#include <iostream>
using namespace std;
const int Months = 12;
const int Years = 3;

int main()
{
    const char *m[Months] =
    {
        "January",
        "February",
        "Mart",
        "Aprel",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int count_books[Years][Months];
    for (int i = 0; i < Years; i++)
    {
        for (int j = 0; j < Months; j++)
        {
            cout << m[j] << " month: ";
            cin >> count_books[i][j];
        }
    }

    int all_summ = 0, summ_year = 0;
    for (int i = 0; i < Years + 1; i++)
    {
        cout << "summa each year:\t" << summ_year << endl;
        all_summ += summ_year;
        summ_year = 0;
        for (int j = 0; j < Months; j++)
        {
                summ_year += count_books[i][j];
        }
    }
    cout << "All summa of years:\t" << all_summ << endl;
    return 0;
}
