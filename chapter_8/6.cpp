#include <iostream>
#include <cstring>

using namespace std;
const char * maxn(const char * arr[], int pty);

template <typename T>
T maxn(T * arr, int n)
{
    T maxvalue = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxvalue)
            maxvalue = arr[i];
    }
    return maxvalue;
}

const char * maxn(const char * arr[], int pty)
{
    const char * MaxLengthWord = &arr[0][0];
    int maxCharacters = strlen(arr[0]);
    int next = 0;
    for (int i = 1; i < pty; i++)
    {
        next = strlen(arr[i]);
        if (next > maxCharacters)
        {
            maxCharacters = next;
            MaxLengthWord = &arr[i][0];
        }
    }
    return MaxLengthWord;
}

int main()
{
    int iarr[6] = {5345, 1231, 3456, 8475, 1023};
    double darr[4] = {245.782, 243.876, 123.85, 987.321};
    const char * city[5] = {"London", "Paris", "Moscow", "NewYork", "Kursk"};
    cout << "Maximum integer array: " << maxn(iarr, 6) << endl;
    cout << "Maximum double array: " << maxn(darr, 4) << endl;
    cout << "Maximum character array: " << maxn(city, 5) << endl;
    return 0;
}
