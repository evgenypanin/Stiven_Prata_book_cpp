#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count line: ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        cout << "\n";
        for (int j = 0; j < i ; j++)
        {
            cout << "*";
        }
    }
    return 0;
}
