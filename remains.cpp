
#include <iostream>
int a;
int b;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << " Введите первое число : ";
    std::cin >> a ;
    std::cout << " Введите второе число : ";
    std::cin >> b ;
    if (a % b == 0) {
        std::cout << " Число " << a << " делится на " << b <<" без остатка.";
    }
    else {
        std::cout << " Число " << a << " не делится на " << b << " без остатка.";
    }
}