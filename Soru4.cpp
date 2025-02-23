#include <iostream>
int main()
{
    int a;

    std::cout << "Sayi a giriniz: ";
    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << "Cift";
    }
    else
    {
        std::cout << "Tek";
    }
}