#include <iostream>
using namespace std;

int main()
{
    int count, summ = 0, n;
    while (true)
    {
        cout << "Enter the number: ";
        cin >> n;
        ++count;
        summ += n;
        cout << n << " = " << summ << endl;
        if (n == 0)
            break;
    }
    cout << "Summa = " << summ << ", Count = " << count << endl;
    return 0;
}
