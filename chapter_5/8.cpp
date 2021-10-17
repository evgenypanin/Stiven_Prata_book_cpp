#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char word;
    cout << "Enter characters; enter done to quit:\n";
    cin.get(word);
    while (word != '#')
    {
        cout << word;
        ++count;
        cin.get(word);
    }
    cout << endl << count << " characters read\n";
    return 0;
}
