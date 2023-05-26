#include <iostream>

int main() 
{
    int Numero {4096};
    int *ptr;
    int *ptr2;
    ptr = &Numero;
    ptr2 = ptr;
    
    std::cout << "\nValor de Numero: " << Numero << "\n";
    std::cout << "\nEndereco contido em ptr: " << ptr << "\n";
    std::cout << "\nEndereco contido em ptr2: " << ptr2<< "\n";
    std::cout << "\nEndereco de ptr: " << &ptr<< "\n";
    std::cout << "\nEndereco de ptr2: " << &ptr2<< "\n";

    *ptr2 = *ptr + 10;
    std::cout << "\nValor de Numero: " << Numero<< "\n";


    return 0;
}