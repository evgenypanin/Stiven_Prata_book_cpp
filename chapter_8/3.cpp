#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

string upper(string & str);

int main()
{
    string phrase;
    cout << "Enter a string (q to quit): ";
    while(getline(cin, phrase))
    {
        if (phrase == "q")
        {
            cout << "Bye";
            exit(EXIT_FAILURE);
        }
        cout << "Upper string: " << upper(phrase) << "\nEnter a string (q to quit): ";
    }
    return 0;

}

string upper(string & str)
{
    char * cstr = new char[str.length()+1];
    strcpy(cstr, str.c_str());
    for (size_t i = 0; i < str.length(); i++)
    {
        cstr[i] = toupper(cstr[i]);
        str[i] = cstr[i];
    }
    delete [] cstr;
    return str;
}
