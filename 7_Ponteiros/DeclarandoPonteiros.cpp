#include <iostream>

int main()
{
    int *ptr {nullptr};

    int Numero{101};

    //ptr aponta para o endereço de numero
    ptr = &Numero;

    //Modificando o valor de numero indiretamente por meio de ptr

    *ptr = 103;

    std::cout << "Endereco de Numero: " << &Numero << "\n";
    std::cout << "Endereco de ptr: " << *ptr << "\n";

    return 0;

}