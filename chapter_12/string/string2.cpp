#include <cstring>
#include "string2.h"
using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}

String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String &st, const String &st2)
{
    return (std::strcmp(st.str, st2.str) < 0);
}

bool operator>(const String &st, const String &st2)
{
    return st2.str < st.str;
}

bool operator==(const String &st, const String &st2)
{
    return (std::strcmp(st.str, st2.str) == 0);
}

std::ostream & operator<<(std::ostream & os, const String & st)
{
    os << st.str;
    return os;
}

std::istream & operator>>(std::istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && cin.get() != '\n')
        continue;
    return is;
}

String & String::operator+(const String & st)
{
    char * temp;
    temp = new char[len + 1];
    std::strcpy(temp, str);
    delete [] str;
    str = new char[len + st.len + 1];
    std::strcpy(str, temp);
    delete [] temp;
    std::strcat(str, st.str);
    return *this;
}

String & String::operator+(const char * s)
{
    char * temp;
    temp = new char[len + 1];
    std::strcpy(temp, str);
    delete [] str;
    int n = std::strlen(s);
    str = new char[len + n + 1];
    std::strcpy(str, s);
    std::strcat(str, temp);
    delete [] temp;
    return *this;
}

void String::stringup()
{
    char * temp;
    len = std::strlen(str);
    temp = new char[len + 1];
    for (int i = 0; i < len; i++)
        temp[i] = toupper(str[i]);
    delete [] str;
    str = new char[len + 1];
    std::strcpy(str, temp);
    delete [] temp;
}

void String::stringlow()
{
    char * temp;
    len = std::strlen(str);
    temp = new char [len + 1];
    for (int i = 0; i < len; i++)
        temp[i] = tolower(str[i]);
    delete [] str;
    str = new char[len + 1];
    std::strcpy(str, temp);
    delete [] temp;
}

int String::has(char a)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == a)
            count++;
    }
    return count;
}
