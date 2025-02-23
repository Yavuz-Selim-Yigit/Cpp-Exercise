#include <iostream>
int main()
{
    int a;
    int i;

    std::cout << "a sayisi giriniz: ";
    std::cin >> a;

    i = 1;

    while (i <= a)
    {
        std::cout << i << "\n";
        i = i + 2;
    }
}