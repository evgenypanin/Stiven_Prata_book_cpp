#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    int count;
    cout << "Enter the alpha a-z: ";
    cin >> ch;
    while(ch != '@')
    {
        ++count;
        if (!(isalpha(ch)))
        {
            cin.clear();
            cout << "No correct symbol\n";
            cout << "Please input alpha\n";
        }
        else if (isupper(ch))
            cout << char(tolower(ch)) << endl;
        else if (islower(ch))
            cout << char(toupper(ch)) << endl;
        cout << "Enter the alpha a-z: ";
        cin >> ch;


    }
    cout << count << " alpha symbol\n";
    return 0;
}
