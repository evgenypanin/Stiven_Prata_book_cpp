#include <iostream>

const int ArSeasons = 4;
const int Elements = 7;

void fill_array(double arr[], const char seasons[][Elements]);
void show_array(const double arr[], const char seasons[][Elements]);

int main()
{
    const char seasons[ArSeasons][Elements] = {"Spring", "Summer", "Fall", "Winter"};
    double arr[ArSeasons];
    fill_array(arr, seasons);
    show_array(arr, seasons);
    return 0;
}

void fill_array(double arr[], const char seasons[][Elements])
{
    using namespace std;
    for (int i = 0; i < ArSeasons; i++)
    {
        cout << seasons[i] << ": ";
        cin >> arr[i];
    }
}

void show_array(const double arr[], const char seasons[][Elements])
{
    using namespace std;
    for (int i = 0; i < ArSeasons; i++)
        cout << seasons[i] << ": " << arr[i] << endl;
}
