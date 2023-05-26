#include <iostream>

int main()
{
    int Numero{4890};
    char Letra{'E'};
    // Ponteiro genérico. Não se sabe que tipo de dado você vai apontar.
    void *ptrG;
    //Agora ptrG  passa a apontar para a variável Letra
    ptrG = &Letra;

    std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";

    ptrG = &Numero;

    std::cout << "Valor de Numero via ptrG = " << *(int*)ptrG << "\n";
    

    return 0;
}