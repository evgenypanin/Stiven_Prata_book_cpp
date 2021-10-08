#include <iostream>
using namespace std;
const int Size = 5;

template <typename T>
T max5(T * arr)
{
    T maxvalue = arr[0];
    for (int i = 1; i < Size; i++)
    {
        if (arr[i] > maxvalue)
            maxvalue = arr[i];
    }
    return maxvalue;
}

int main()
{
    int arr[Size] = {34,654,1024,48,532};
    cout << max5(arr) << endl;
    double iarr[Size] = {2.8, 10.9, 32.1, 75.4, 98.1};
    cout << max5(iarr) << endl;
    return 0;
}
