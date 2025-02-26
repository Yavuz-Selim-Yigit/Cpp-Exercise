#include <iostream>

int main()
{
    int a;
    int b;
    int buyuk;
    int kucuk;
    int i;

    std::cout << "Bir a sayisi giriniz: ";
    std::cin >> a;
    std::cout << "Bir b sayisi giriniz: ";
    std::cin >> b;

    if (a > b)
    {
        buyuk = a;
        kucuk = b;
    }
    else
    {
        buyuk = b;
        kucuk = a;
    }

    while (i <= buyuk)
    {
        if (buyuk == kucuk)
        {
            buyuk = buyuk - 1;
        }
        else
        {
            std::cout << buyuk << "\n";
            buyuk = buyuk - 1;
        }
    }
}