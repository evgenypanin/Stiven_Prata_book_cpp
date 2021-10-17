#include <iostream>

void factorial(int arg);

int main()
{
    using namespace std;
    cout << "Enter the integer number: ";
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            n = 1;
            cout << "Factorial 0 = " << n << "\n";
        }
        if (!cin || n < 0)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input! Please input integer number: ";
        }
        factorial(n);
        cout << "Enter the integer number: ";
        cin >> n;

    }
    return 0;
}

void factorial(int arg)
{
    using namespace std;
    int total;
    total = arg * (arg-1);
    cout << "Factorial " << arg << " = " << total << endl;
    factorial(arg);
}
