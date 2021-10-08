#include "stonewt.h"
const int LIMIT = 6;

int main()
{
    Stonewt incognito(21, 8);
    Stonewt wolfe(7, 5);
    Stonewt taft(11, 10);
    Stonewt arr[LIMIT] = {incognito, wolfe, taft};

    for (int i = 3; i < LIMIT; i++)
    {
        int st = 0;
        double pds = 0;
        std::cout << "Enter count stone: ";
        std::cin.sync();
        std::cin >> st;
        std::cout << "Enter weight pds stones: ";
        std::cin >> pds;
        arr[i] = Stonewt(st, pds);
    }

    std::cout << "Minimal value in Stonewt array = " << min_pounds(arr) << std::endl;
    std::cout << "Maximal value in Stonewt array = " << max_pounds(arr) << std::endl;
    std::cout << "Average value in stone>=11 = " << average_stone(arr) << std::endl;
    return 0;
}
