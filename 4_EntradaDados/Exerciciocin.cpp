#include <iostream>

int main()
{
    float Num1, Num2, Num3;

    std::cout << "Digite o primeiro numero: " << std::endl;
    std::cin >> Num1;

    std::cout << "Digite o segundo numero: " << std::endl;
    std::cin >> Num2;

    std::cout << "Digite o terceiro numero: " << std::endl;
    std::cin >> Num3;

    std::cout << "Numeros digitados: " << Num1 << " " <<  Num2 << " " << Num3 << std::endl;
    std::cout << "Media dos numeros: " << (Num1 + Num2 + Num3) / 3 << std:: endl;

}