#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_struct(const box *razmer);
void mul_volume(box *structing);
void fill_struct(box *structing);

int main()
{
    using namespace std;
    box expenses;
    fill_struct(&expenses);
    show_struct(&expenses);
    mul_volume(&expenses);
    show_struct(&expenses);
    return 0;
}

void fill_struct(box *structing)
{
    using namespace std;
    cout << "Enter the maker: ";
    cin.getline(structing->maker, 40);
    cout << "Enter the height: ";
    cin >> structing->height;
    cout << "Enter the width: ";
    cin >> structing->width;
    cout << "Enter the length: ";
    cin >> structing->length;
    cout << "Enter the volume: ";
    cin >> structing->volume;
    cin.get();
}

void mul_volume(box *structing)
{
    std::cout << "Mull three data in structing.volume\n";
    structing->volume = structing->height * structing->length * structing->width;
}

void show_struct(const box *structing)
{
    std::cout << "Full struct Box\n";
    std::cout << "Maker: " << structing->maker << "\n"
         << "Height: " << structing->height << "\n"
         << "Width: " << structing->width << "\n"
         << "Length: " << structing->length << "\n"
         << "Volume: " << structing->volume << "\n";
}
