#include "cow.h"

int main()
{
    Cow pc1;
    Cow pc2("Herbal", "Essential", 20.0);
    Cow pc3;
    pc1.ShowCow();
    pc2.ShowCow();
    pc3.ShowCow();
    pc3 = pc2;
    pc3.ShowCow();
    return 0;
}
