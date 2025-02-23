#include <iostream>
int main()
{
    int a, b;

    std::cout << "Sayi a giriniz: " << "\n";
    std::cin >> a;
    std::cout << "Sayi b giriniz: " << "\n";
    std::cin >> b;

    if (a > b)
    {
        std::cout << "Sonuc: " << a;
    }
    else if (a == b)
    {
        std::cout << "Sonuc Esit";
    }
    else
    {
        std::cout << "Sonuc: " << b;
    }
}