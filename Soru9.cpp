#include <iostream>
int main()
{
    int a;
    int i;

    std::cout << "Sayi a giriniz: ";
    std::cin >> a;

    i = 1;

    while (i <= a)
    {
        std::cout << a + 1 - i << "\n";
        i = i + 1;
    }
}