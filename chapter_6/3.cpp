#include <iostream>
void showmenu();
void tree();
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    while (ch != 'Q' && ch != 'q')
    {
        switch(ch)
        {
            case 'c': cout << "carnivore\n"; break;
            case 't': tree(); break;
            case 'p': cout << "pianist\n"; break;
            case 'g': cout << "game\n"; break;
            default: "That`s not a choise.\n";
        }
        showmenu();
        cin >> ch;
    }
    return 0;
}

void showmenu()
{
    cout << "Please enter one of the following choises: \n"
         << "c) carnivore   p) pianist"
         << "t) tree        g) game\n";
}

void tree()
{
    cout << "A maple is a tree.\n";
}
