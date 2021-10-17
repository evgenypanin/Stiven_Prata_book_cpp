#include <iostream>
#include <cctype>
#include <cstdlib>
const int ArSize = 10;
int main()
{
    using namespace std;
    double arr[ArSize];
    int count;
    int i = 0;
    cout << "Enter the double number: ";
    while (i < ArSize && cin >> arr[i])
    {
        ++i;
        cout << "Enter the double number: ";
    }
    double total = 0.0;
    double average;
    for (int j = 0; j < ArSize; j++)
        total += arr[j];
    average = total / i;
    cout << "\n" << average << " average is total\n";
    for (int j = 0; j < ArSize; j++)
    {
        if (arr[j] < average)
            cout << arr[j] << endl;
    }
    return 0;
}
