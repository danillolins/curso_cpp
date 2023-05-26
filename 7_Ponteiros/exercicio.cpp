#include <iostream>

int main()
{
    int Numero{234};
    int *ptr = &Numero;

    *ptr = 1456;

    std::cout << "Valor de Numero atraves de ptr = " << *ptr << "\n";
    std::cout << "Endereco de Numero = " << &Numero << "\n";
    std::cout << "Endereco de ptr = " << &ptr << "\n";

    int *ptr2 = ptr;

    *ptr += 200;
    std::cout << "Valor de Numero atraves de ptr2 = " << *ptr2 << "\n";
    return 0;

}