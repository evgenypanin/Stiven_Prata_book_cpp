#include <iostream>
const int Max = 5;
double *fill_array(double *arr, double *ArEnd);
void show_array(double *arr, double *ArEnd);
void revalue(double r, double *arr, double *ArEnd);

int main()
{
    double properties[Max];
    double *ArEnd = fill_array(properties, properties + Max);
    show_array(properties, ArEnd);
    if (ArEnd != properties)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, ArEnd);
        show_array(properties, ArEnd);
    }
    return 0;
}

double *fill_array(double *arr, double *ArEnd)
{
    using namespace std;
    double temp;
    double *pt;
    int i = 0;
    for (pt = arr; pt != ArEnd; pt++)
    {
        cout << "Enter value #" << ++i << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            break;
        }
        else if (temp < 0)
            break;
        *pt = temp;
    }
    return pt;
}

void show_array(double * arr, double *ArEnd)
{
    using namespace std;
    int i = 0;
    for (double *pt = arr; pt != ArEnd; pt++)
    {
        cout << "Property #" << ++i << ": $";
        cout << *pt << endl;
    }
}

void revalue(double r, double * arr, double *ArEnd)
{
    int i = 0;
    double *pt;
    for (pt = arr; pt != ArEnd; pt++)
        *pt *= r;
}
