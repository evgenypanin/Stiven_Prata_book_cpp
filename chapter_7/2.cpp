#include <iostream>
#include <array>

const int Max = 10;

int fill_array(int arr[], int limit);
void show_array(const int arr[], int n);
double average_result(int arr[], int n);

int main()
{
    using namespace std;
    int expenses[Max];
    int size = fill_array(expenses, Max);
    show_array(expenses, size);
    double x = average_result(expenses, size);
    cout << "\n" << x << " average result\n";
    return 0;
}

int fill_array(int arr[], int limit)
{
    using namespace std;
    int i;
    int temp;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter #" << (i+1) << " value: ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated break\n";
            break;
        }
        else if (temp < 0)
            break;
        arr[i] = temp;
    }
    return i;

}

void show_array(const int arr[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }

}

double average_result(int arr[], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total / 2;
}
