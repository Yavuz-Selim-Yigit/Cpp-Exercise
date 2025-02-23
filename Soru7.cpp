#include <iostream>

int main()
{
    int a;
    int b;
    int i;

    std::cout << "Sayi a: ";
    std::cin >> a;
    std::cout << "Sayi b: ";
    std::cin >> b;

    i = 1;

    while (i <= b)
    {
        std::cout << i << ".Sayi: " << a << "\n";
        i = i + 1;
    }
}