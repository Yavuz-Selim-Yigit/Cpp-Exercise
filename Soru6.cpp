#include <iostream>
int main()
{
    int x;

    std::cout << "x sayisi giriniz: ";
    std::cin >> x;

    if ((x == 1) || (x == 2))
    {
        int c;
        int a;
        int b;

        if (x == 1)
        {
            std::cout << "a sayisi giriniz: ";
            std::cin >> a;
            std::cout << "b sayisi giriniz: ";
            std::cin >> b;

            c = a * b;
            std::cout << c;
        }
        else
        {
            std::cout << "a sayisi giriniz: ";
            std::cin >> a;
            std::cout << "b sayisi giriniz: ";
            std::cin >> b;

            c = a + b;
            std::cout << c;
        }
    }
    else
    {
        std::cout << "HATA";
    }
}