#include "complex0.h"

int main()
{
    using COMPLEX::Complex;
    using std::cout;
    using std::endl;
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (std::cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "complex conjudate is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * c is " << 2 * c << endl;
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}
