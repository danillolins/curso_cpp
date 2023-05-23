#include <iostream>
#include <string>

int main()
{
    int NumeroInteiro {12};
    float NumeroReal {34.56};
    char Caractere {'c'};
    std::string Texto {"Texto da String"};

    std::printf("Valor numero inteiro = %d \n", NumeroInteiro);
    std::printf("Valor numero real = %.2f \n", NumeroReal);
    std::printf("Caractere = %c \n", Caractere);
    std::printf("String = %s \n", Texto.c_str());
    
    return 0;

}