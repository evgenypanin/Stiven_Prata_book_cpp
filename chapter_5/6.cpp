#include <iostream>
using namespace std;

struct Mecenat
{
    char name[32];
    double summa;
};

int main()
{
    int n;
    cout << "Enter the count Mecenat: ";
    cin >> n;
    cin.get();
    Mecenat *listing = new Mecenat[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the fullname mecenat: ";
        cin.getline(listing[i].name, 32);
        cout << "Enter the count $";
        cin >> listing[i].summa;
        cin.get();
    }

    for (int j = 0; j < n; j++)
    {
        if (listing[j].summa >= 10000)
            cout << "Grand Patrons: " << listing[j].name << ", " << listing[j].summa << "\n";
    }

    for (int j = 0; j < n; j++)
    {
        if (listing[j].summa < 10000)
            cout << "Patrons: " << listing[j].name << " " << listing[j].summa << "\n";
    }
    return 0;


}

