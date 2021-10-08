#include <iostream>
const double nalog_1 = 0.00;
const double nalog_2 = 0.10;
const double nalog_3 = 0.15;
const double nalog_4 = 0.20;

int main()
{
    using namespace std;
    double temp;
    cout << "Enter the count twarps: ";

    while(cin >> temp && temp >= 0)
    {
        double dan = 0.0;
        if (temp <= 5000)
            cout << dan << " twarps\n";
        else if (temp > 5000 && temp < 10000)
        {
            dan = 5000 * nalog_1 + (10000 - temp) * nalog_2;
            cout << dan << " twars\n";
        }

        else if (temp > 10000 && temp < 20000)
        {
            dan = 5000 * nalog_1 + 10000 * nalog_2 + (20000 - temp) * nalog_3;
            cout << dan << " twarps\n";
        }
        else if (temp >= 20000 && temp < 35000)
        {
            dan = 5000 * nalog_1 + 10000 * nalog_2 + 20000 * nalog_3 + (35000 - temp) * nalog_4;
            cout << dan << " twarps\n";
        }
        else
        {
            dan = 5000 * nalog_1 + 10000 * nalog_2 + 20000 * nalog_3 + (temp - 35000) * nalog_4;
            cout << dan << " twarps\n";
        }
        cout << "Enter the count twarps: ";


    }
    return 0;

}
