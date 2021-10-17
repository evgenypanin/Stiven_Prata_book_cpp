#include <iostream>
using namespace std;

int main()
{
    float original_dafna = 100, klef = 100, dafna = 100;
    float proc_dafna = 0.10, proc_klef = 0.05;
    int count = 2000;
    while (count < 2028)
    {
        dafna += (original_dafna * proc_dafna);
        klef += (klef * proc_klef);
        ++count;
        cout << "Year: " << count << " Summa dafna = " << dafna << ", " << "Summa klef = " << klef << endl;
        if (klef > dafna)
            break;
    }
    return 0;
}
