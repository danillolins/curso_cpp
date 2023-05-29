#include <iostream>

int main()
{
    int Numero{1024};
    char Letra{'A'};
    int &Ref = Numero;

    std::cout << "Valor de Numero usando Ref: " << Ref << "\n";
    std::cout << "Valor de endereco de Numero: " << &Numero << "\n";
    std::cout << "Valor de endereco de Ref: " << &Ref << "\n";
    
    int *ptr = &Numero;
    std::cout << "Valor de endereco de ptr: " << &ptr << "\n";
    std::cout << "Valor de Numero usando ptr: " << *ptr << "\n";
    std::cout << "Valor de endereco contido em ptr: " << ptr << "\n";



    return 0;
}