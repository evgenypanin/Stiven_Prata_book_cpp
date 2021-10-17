#include <iostream>
#include <fstream>
using namespace std;

struct Mecenat
{
    char name[32];
    double summa;
};

int main()
{
    ofstream outFile;
    outFile.open("mecenat.txt");
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    int n;
    cout << "Enter the count Mecenat: ";
    cin >> n;
    cin.get();
    outFile << n << "\n";
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
            outFile << listing[j].name << "\n" << listing[j].summa << "\n";
    }

    for (int j = 0; j < n; j++)
    {
        if (listing[j].summa < 10000)
            outFile << listing[j].name << "\n" << listing[j].summa << "\n";
    }
    outFile.close();
    return 0;


}

