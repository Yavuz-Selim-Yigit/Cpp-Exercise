#include <iostream>
int main()
{
    int a;
    int i;

    std::cout << "Sayi a giriniz: ";
    std::cin >> a;

    i = 1;

    while (a >= i)
    {
        std::cout << i << "\n";
        i = i + 1;
    }
}