#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void show(const stringy & some, int times = 1);
void show(const char * str, int times = 1);
void set(stringy & some, const char * cstr);
void del(stringy & some);

int main()
{
    stringy beany;
    char testing[] = "Reality isn`t what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    del(beany);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void show(const stringy & some, int times)
{
    for (int i = 0; i < times; i++)
        cout << some.str << endl;
}

void show(const char * str, int times)
{
    for (int i = 0; i < times; i++)
        cout << str << endl;
}

void set(stringy & some, const char * cstr)
{
    some.ct = strlen(cstr);
    some.str = new char[some.ct + 1];
    strcpy(some.str, cstr);
}

void del(stringy & some)
{
    delete [] some.str;
}
