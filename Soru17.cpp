#include <iostream>
int main()
{
    int uzunluk;
    int konum;

    std::cout << "Uzunluk giriniz: ";
    std::cin >> uzunluk;
    std::cout << "KOnum giriniz: ";
    std::cin >> konum;

    for (int i = 1; i <= uzunluk; i = i + 1)
    {
        if (i == konum)
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }
    }
}
