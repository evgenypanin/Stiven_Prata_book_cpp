#include <iostream>


using namespace std;
const int max_struct = 2;

struct Car
{
    char name[32];
    int year;
};

int main()
{
    int count_cars;
    cout << "How much cars in catalog: ";
    cin >> count_cars;
    cin.get();
    Car *catalog = new Car[count_cars];
    for (int i = 0; i < count_cars; i++)
    {
        cout << "Car #" << i << endl;
        cout << "Enter the name proizvoditel: ";
        cin.get(catalog[i].name, 32);
        cout << "Enter the year car: ";
        cin >> catalog[i].year;
        cin.get();
    }
    cout << "All collection: \n";
    for (int i = 0; i < count_cars; i++)
    {
        cout << catalog[i].year << " " << catalog[i].name << endl;
    }
    return 0;
}
