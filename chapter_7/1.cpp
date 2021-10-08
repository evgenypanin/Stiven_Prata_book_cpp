#include <iostream>

double garmon(int x, int y);

int main()
{
    using namespace std;
    int x;
    int y;
    double total = 0.0;
    cout << "Enter the two numbers: ";
    while(cin >> x >> y)
    {
        if (x == 0 || y == 0)
        {
            cout << "Quit.\n";
            break;
        }
        total = garmon(x , y);
        cout << "Average garmonic = " << total << "\n";
        cout << "Enter the two numbers: ";
    }
    return 0;
}

double garmon(int x, int y)
{
    return 2.0 * x * y / (x + y);
}
