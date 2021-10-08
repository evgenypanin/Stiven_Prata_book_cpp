#include <iostream>

struct CandyBar
{
    const char * name;
    double weight;
    int ccal;
};

void show_struct(const CandyBar & choco);
void set_field(CandyBar & choco, const char *name = "Millennium Munch", double weight = 2.85, int ccal = 350);

int main()
{
    using namespace std;
    CandyBar box1;
    CandyBar box2;
    CandyBar box3;
    set_field(box1);
    show_struct(box1);

    set_field(box2, "Rafaello", 3.42, 550);
    show_struct(box2);

    set_field(box3, "Snikers", 4.82);
    show_struct(box3);
}

void show_struct(const CandyBar & choco)
{
    using namespace std;
    cout << "Name: " << choco.name << endl;
    cout << "Weight: " << choco.weight << endl;
    cout << "Ccal: " << choco.ccal << endl;
}

void set_field(CandyBar & choco, const char * name, double weight, int ccal)
{
    using namespace std;
    choco.name = name;
    choco.weight = weight;
    choco.ccal = ccal;
}

