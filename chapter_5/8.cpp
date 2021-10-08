#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter name the data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char value;
    int count = 0;
    inFile >> value;
    while (inFile.good())
    {
        ++count;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
        cout << "Items read: " << count << endl;
    inFile.close();
    return 0;
}
