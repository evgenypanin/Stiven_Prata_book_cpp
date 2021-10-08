#include <iostream>
#include <ofstream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

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
    int i = 0;
    ofstream fout;
    fout.open("log.txt");
    cout << "Enter target distance (q to quit):\n";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, VECTOR::POL);
            result = result + step;
            steps++;
        }
        fout << "After " << steps << " steps, the subject "
             << "has the following location:\n";
        fout << "(" << i++ << ") " << result << endl;
        result.polar_mode();
        fout << "or\n" << result << endl;
        fout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    fout.close();
    return 0;
}
