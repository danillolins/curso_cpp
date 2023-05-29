// Soma de 10 Numeros
#include <iostream>

int main ()
{
    int numeros[10];
    int Maior{0};
    int Menor{0};
    int NumElementos;

    std::cout << "Digite o numero de elementos: ";
    std::cin >> NumElementos;



    for(int i = 0; i < NumElementos; i++)
    {
        std::cout << "Digite " << i+1 << " numero: ";
        std::cin >> numeros[i];
        std::cout << "\n";
        if(i == 0) 
        {
            Maior = numeros[i];
            Menor = numeros[i];
        }
        else 
        {
            if(numeros[i] > Maior) Maior = numeros[i];
            else if(numeros[i] < Menor) Menor = numeros[i];
            
        }
    }

    std::cout << "Maior  = " << Maior << "\n";
    std::cout << "Menor  = " << Menor;

    return 0;
}