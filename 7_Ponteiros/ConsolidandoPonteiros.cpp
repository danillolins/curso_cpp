#include <iostream>

int main() 
{
    int Numero {102};

    int *ptr = &Numero;
    

    std::cout << "\nValor da variavel Numero: " << Numero << "\n";
    std::cout << "\nValor da variavel ptr: " << ptr << "\n";
    std::cout << "\nValor do endereco Numero: " << &Numero << "\n";
    std::cout << "\nValor do endereco ptr: " << &ptr << "\n";
    std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";

    *ptr = 20963;
    std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";

    return 0;
}