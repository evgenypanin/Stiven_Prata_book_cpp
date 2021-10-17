#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string word;
    cout << "Enter characters; enter done to quit:\n";
    getline(cin, word);
    while (word != "done")
    {
        cout << word << endl;
        ++count;
        getline(cin, word);
    }
    cout << endl << count << " characters read\n";
    return 0;
}
