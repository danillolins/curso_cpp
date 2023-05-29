// Soma de 10 Numeros
#include <iostream>

int main ()
{
    int numeros[10];
    int Soma{0};

    for(int i = 0; i < 10; i++)
    {
        std::cout << "Digite " << i+1 << " numero: ";
        std::cin >> numeros[i];
        std::cout << "\n";
        Soma += numeros[i]; 
    }

    std::cout << "Soma  = " << Soma;

    return 0;
}