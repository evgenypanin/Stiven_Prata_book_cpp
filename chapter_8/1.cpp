#include <iostream>
#include <string>

using namespace std;
int count = 0;

void str_func(string *str, int n = 0);

int main()
{
    string phrase = "Let`s go!\n";
    str_func(&phrase);
    phrase = "Test my function\n";
    str_func(&phrase);
    phrase = "Kill down\n";
    str_func(&phrase);
    return 0;
}

void str_func(string *str, int n)
{
    if (n != 0)
    {
        for (int i = 0; i < count; ++i)
            cout << *str;
    }
    else
        cout << *str;
    ++count;
}
