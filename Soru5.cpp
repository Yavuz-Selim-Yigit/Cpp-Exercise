#include <iostream>

int main()
{
    int a, b;

    std::cout << "Sayi a giriniz: ";
    std::cin >> a;

    std::cout << "Sayi b giriniz: ";
    std::cin >> b;

    if (a % b == 0)
    {
        std::cout << "Tam Kat";
    }
    else
    {
        std::cout << "Tam Kat DEGIL";
    }
}