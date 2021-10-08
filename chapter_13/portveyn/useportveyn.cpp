#include "portveyn.h"

int main()
{
    Port sevenaxe("barmata", "poylo", 100);
    VintagePort caberne("caberne", "vintage", 100, "sixaxe", 1860);
    Port test;
    test = sevenaxe;
    test.Show();
    VintagePort temp;
    temp = caberne;
    temp.Show();
    return 0;
}
