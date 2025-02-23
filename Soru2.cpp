#include <iostream>

int main()
{
    int a, b, c, finalist;

    std::cout << "Sayi a giriniz: " << "\n";
    std::cin >> a;
    std::cout << "Sayi b giriniz: " << "\n";
    std::cin >> b;
    std::cout << "Sayi c giriniz: " << "\n";
    std::cin >> c;

    if (a > b)
    {
        finalist = a;
    }
    else
    {
        finalist = b;
    }
    if (finalist > c)
    {
        std::cout << "Sonuc: " << finalist;
    }
    else
    {
        std::cout << "Sonuc: " << c;
    }
}