#include <iostream>
#include <algorithm>

int fill_array(double arr [], int n);
void show_array(const double arr [], int n);
void reverse_array(double arr [], int n);

const int Max = 10;

int main()
{
    using namespace std;
    double expenses[Max];
    int size = fill_array(expenses, Max);
    show_array(expenses, size);
    reverse_array(expenses, size);
    show_array(expenses, size);
    return 0;
}

int fill_array(double arr [], int n)
{
    using namespace std;
    double temp;
    int i;
    cout << "Process fill array, quit input character q\n";
    for (i = 0; i < n; i++)
    {

        cout << "Enter the integer number: ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input, process terminated\n";
            break;
        }
        arr[i] = temp;
    }
    return i;
}

void show_array(const double arr [], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << "#" << (i+1) << " " << arr[i] << "\n";
}

void reverse_array(double arr [], int n)
{
    using namespace std;
    double temp[n];
    copy_n(arr, n, temp);
    int min, max, i, j;
    min = 1;
    max = n-2;
    for (i = max, j = min; i >= min, j <= max; i--, j++)
        arr[j] = temp[i];

}
