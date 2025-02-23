#include <iostream>

int main()
{

    int b;
    int k;

    std::cout << "Buyuk sayi: ";
    std::cin >> b;

    std::cout << "Kucuk sayi: ";
    std::cin >> k;

    while (k <= b)
    {
        std::cout << k << "\n";
        k = k + 1;
    }
}