#include <iostream>
#include <cstdlib>
void show_menu();
using namespace std;
const int StrSize = 32;
struct Bop
{
    char fullname[StrSize];
    char title[StrSize];
    char bopname[StrSize];
    int preference;
};



int main()
{
    int n;
    cout << "Enter the count structure: ";
    cin >> n;
    cin.get();
    Bop *listing = new Bop[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the fullname Bop: ";
        cin.getline(listing[i].fullname, StrSize);
        cout << "Enter the title Bop: ";
        cin.getline(listing[i].title, StrSize);
        cout << "Enter the Bopname: ";
        cin.getline(listing[i].bopname, StrSize);
        cout << "Enter the preference: ";
        cin >> listing[i].preference;
        cin.get();
    }
    for (int j = 0; j < n; j++)
    {
        cout << "#" << j << " " << listing[j].fullname << "\n";
    }
    int paste;
    cout << "Please input number of fullname: ";
    cin >> paste;
    show_menu();
    char choise;
    cout << "Enter your choice: ";
    cin >> choise;
    while (choise != 'q' && choise != 'Q')
    {
        switch(choise)
        {
            case 'a': cout << listing[paste].fullname << "\n"; break;
            case 'b': cout << listing[paste].title << "\n"; break;
            case 'c': cout << listing[paste].bopname << "\n"; break;
            case 'd':
                if (listing[paste].preference == 0)
                    cout << listing[paste].fullname << "\n";
                else if (listing[paste].preference == 1)
                    cout << listing[paste].title << "\n";
                else if (listing[paste].preference == 2)
                    cout << listing[paste].bopname << "\n";
                else
                    cout << "Not a different number\n";
                break;
            case 'q': exit(EXIT_FAILURE);
            default: cout << "That`s not choise.\n";
        }
        show_menu();
        cout << "Enter your choise: ";
        cin >> choise;
    }
    return 0;


}



void show_menu()
{
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name b.  display by title\n";
    cout << "c. display by bopname d.   display by preference\n";
    cout << "q. quit\n";
}
