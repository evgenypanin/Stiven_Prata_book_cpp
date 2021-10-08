#include "stonewt.h"
using std::cout;
int main()
{
    Stonewt incognito(275);
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    Stonewt result;
    cout << "The celebrity weighed:\n" << incognito;
    cout << "The detective weighed:\n" << wolfe;
    cout << "The President weighed:\n" << taft;
    result = wolfe - incognito;
    cout << "operator - :\n" << result;
    result = taft * 10;
    cout << "operator *: \n" << result;
    result = wolfe + taft;
    cout << "operator +:\n" << result;
    return 0;

}
