#include <iostream>

int main()
{
    int Numero{1024};
    int Numero2{2024};

    //Referencia só pode referenciar um valor uma única vez.
    int &RefNum{Numero2};

    RefNum = 5644;

    int *ptr = &Numero;
    *ptr = 4048;

    std::cout << "Valor de Numero: " << *ptr << "\n";

    ptr = &Numero2;
    *ptr = Numero + 2000;
    
    std::cout << "Valor de Numero2: " << *ptr << "\n";




    return 0;
}