#include <iostream>
int main()
{
    int a;

    std::cout << "bir a sayisi giriniz: ";
    std::cin >> a;

    if (a % 2 == 0)
    {
        for (int i = 1; i <= a; i++)
        {
            std::cout << "0" << "\n";
        }
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            std::cout << "1" << "\n";
        }
    }
}