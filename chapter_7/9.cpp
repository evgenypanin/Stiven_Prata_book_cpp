#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    using namespace std;
    int class_size;
    cout << "Enter the number count struct: ";
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < class_size; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    return 0;
}

int getinfo(student pt[], int class_size)
{
    int total = 0;
    for (int i = 0; i < class_size; i++)
    {
        cin.sync();
        cout << "Enter the fullname: ";
        cin.getline(pt[i].fullname, SLEN);
        if (strlen(pt[i].fullname) != 0)
        {
            cout << "Enter the hobby: ";
            cin.getline(pt[i].hobby, SLEN);
            cout << "Enter the ooplevel: ";
            cin >> pt[i].ooplevel;
            total++;
        }
        else
            break;
    }
    return total;
}

void display1(student pt)
{
    using namespace std;
    cout << "Fullname: " << pt.fullname << endl;
    cout << "Hobby: " << pt.hobby << endl;
    cout << "Ooplevel: " << pt.ooplevel << endl;
}

void display2(const student *ps)
{
    using namespace std;
    cout << "Fullname: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int class_size)
{
    using namespace std;
    for (int i = 0; i < class_size; i++)
    {
        cout << "Fullname: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Ooplevel: " << pa[i].ooplevel << endl;
    }
}
