#include <iostream>

int main()
{
    int Vetor[] = {1, 23, -78, 900, 234};

    int *ptr = Vetor;

    //Primeiro Modo

    for (int i = 0; i < 5 ; i++) 
    {
        std::cout << "Vetor[ " << i << "] Endereco: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
    }

    //Segundo Modo
    std::cout << "\n *** Enderecos com Ariimetica de Ponteiros ***\n";
    std::cout << "Valor contido em ptr: " << ptr << "\n";
    std::cout << "(ptr + 0) END: " << (ptr + 0) << "Valor: " << *(ptr + 0) << "\n";
    std::cout << "(ptr + 1) END: " << (ptr + 1) << "Valor: " << *(ptr + 1) << "\n";
    std::cout << "(ptr + 2) END: " << (ptr + 2) << "Valor: " << *(ptr + 2) << "\n";
    std::cout << "(ptr + 3) END: " << (ptr + 3) << "Valor: " << *(ptr + 3) << "\n";
    std::cout << "(ptr + 4) END: " << (ptr + 4) << "Valor: " << *(ptr + 4) << "\n";
    std::cout << "Valor contido em ptr: " << ptr << "\n";

    //Terceiro modo
    ptr = Vetor;
    for(int i = 0; i < 5 ; i++)
    {
        std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n";
    }

    //Quarto modo:

    ptr = Vetor;
    for(int i = 0; i < 5 ; i++)
    {
        std::cout << "Vetor[" << i << "] = " << *ptr << "\n";
        ptr++;
    }


    

    return 0;
}