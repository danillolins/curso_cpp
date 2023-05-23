#include <iostream>


int main()
{
    double MaiorNumero, Numero01, Numero02;
    
    std::cout << "Digite primeiro numero: ";
    std::cin >> Numero01;

    std::cout << "Digite segundo numero: ";
    std::cin >> Numero02;
    
    MaiorNumero = (Numero01 > Numero02)? Numero01:Numero02;
    std::cout << "\nMaior numero digitado: " << MaiorNumero << "\n";

    return 0;

}