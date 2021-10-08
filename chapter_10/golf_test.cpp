#include <iostream>
#include "golf.h"

int main()
{
    Golf one;
    one.showgolf();
    Golf two("Johnatan Breedge", 50);
    two.showgolf();
    two.setgolf();
    two.showgolf();
    return 0;
}
