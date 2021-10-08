#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

double max_to_attempt(double * ar, const int n);
double min_to_attempt(double * ar, const int n);
double average_to_attempt(double * ar, const int n);

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int attempt;
    cout << "Enter count attempts: ";
    cin.sync();
    cin >> attempt;
    double arr[attempt];
    for (int i = 0; i < attempt; i++)
    {
        cout << "Enter target distance (q to quit): ";
        cin >> target;
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() %360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        arr[i] = steps;
        steps = 0;
        result.reset(0.0, 0.0);
    }
    cout << "Max steps is " << attempt << " attempts = " << max_to_attempt(arr, attempt) << " steps\n";
    cout << "Min steps is " << attempt << " attempts = " << min_to_attempt(arr, attempt) << " steps\n";
    cout << "Average steps is " << attempt << " attempts = " << average_to_attempt(arr, attempt) << " steps\n";
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

double min_to_attempt(double * ar, const int n)
{
    double minVal;
    minVal = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (minVal > ar[i])
            minVal = ar[i];
    }
    return minVal;

}

double max_to_attempt(double * ar, const int n)
{
    double maxVal;
    maxVal = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (maxVal < ar[i])
            maxVal = ar[i];
    }
    return maxVal;
}

double average_to_attempt(double * ar, const int n)
{
    double average, sum_attempt = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum_attempt += ar[i];
    }
    average = sum_attempt / n;
    return average;
}
