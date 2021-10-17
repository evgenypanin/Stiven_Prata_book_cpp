#include <iostream>>
#include <cstring>
using namespace std;

int main()
{
    int m,n, summ;
    cout << "Enter min number: ";
    cin >> m;
    cout << "Enter max number: ";
    cin >> n;
    for (; m < n + 1; m++)
    {
        summ += m;
    }
    cout << summ << " Summa m -- n";
    return 0;
}
