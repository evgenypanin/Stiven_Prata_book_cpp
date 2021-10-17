#include <iostream>

double calculate(double x, double y, double (*pf)(double, double));
double add(double x, double y);
double mul(double x, double y);
double divide(double x, double y);

int main()
{
    using namespace std;
    cout << "Enter two double numbers: ";
    double x, y;
    cin >> x >> y;
    if (y == 0.0)
        exit(EXIT_FAILURE);
    cout << "1 result: " << calculate(x, y, add) << endl;
    cout << "2 result: " << calculate(x, y, mul) << endl;
    cout << "3 result: " << calculate(x, y, divide) << endl;
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double mul(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    double pa = (*pf)(x,y);
    return pa;
}
