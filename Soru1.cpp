#include <iostream>

int main()
{
    int a;
    int b;
    int c;

    std::cout << "a sayisi giriniz: " << "\n";
    std::cin >> a;
    std::cout << "b sayisi giriniz: " << "\n";
    std::cin >> b;
    std::cout << "c sayisi giriniz: " << "\n";
    std::cin >> c;

    if (b >= a)
    {
        if (b >= c)
        {
            std::cout << "Sonuc: " << b;
        }
        else
        {
            std::cout << "Sonuc: " << c;
        }
    }
    else
    {
        if (a >= c)
        {
            std::cout << "Sonuc: " << a;
        }
        else
        {
            std::cout << "Sonuc: " << c;
        }
    }
}