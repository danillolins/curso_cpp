#include <iostream>

int main()
{
    int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };

    int TamanhoVetor = sizeof(Vetor)/sizeof(int);

    std::cout << "\n Tamanho Vetor: " << TamanhoVetor;
    std::cout << "\n Tamanho de um float: " << sizeof(float);
    std::cout << "\n Tamanho de um int: " << sizeof(int);
    
    return 0;

}