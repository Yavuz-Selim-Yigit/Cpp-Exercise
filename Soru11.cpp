#include <iostream>

int main()
{
    int a, b, kucuk, buyuk;

    std::cout << "Sayi a giriniz: ";
    std::cin >> a;
    std::cout << "Sayi b giriniz: ";
    std::cin >> b;

    if (a >= b)
    {
        kucuk = b;
        buyuk = a;
    }
    else
    {
        kucuk = a;
        buyuk = b;
    }
    while (kucuk <= buyuk)
    {
        std::cout << kucuk << "\n";
        kucuk = kucuk + 1;
    }
}