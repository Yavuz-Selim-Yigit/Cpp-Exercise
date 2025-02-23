#include <iostream>
int main()
{
    int a;
    int i;

    std::cout << "Bir a sayisi giriniz: ";
    std::cin >> a;

    for (i = 0; i < a; i = i + 2)
    {
        std::cout << i << "\n";
    }

    return 0;
}