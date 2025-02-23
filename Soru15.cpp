#include <iostream>
int main()
{

    int a;

    std::cout << "Bir a sayisi giriniz: ";
    std::cin >> a;

    if (a % 2 == 0)
    {
        for (a; 1 <= a; a = a - 2)
        {
            std::cout << a - 1 << "\n";
        }
    }
    else
    {
        for (a; 1 <= a; a = a - 2)
        {
            std::cout << a << "\n";
        }
    }
}