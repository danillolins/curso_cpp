#include <iostream>

void TrocaNumeros(int *pointer1, int *pointer2);

int main()
{
    int Numero1, Numero2;
    int *ptr1, *ptr2;

    std::cout << "Digite o primeiro Numero: ";
    std::cin >> Numero1;
    std::cout << "Digite o segundo Numero: ";
    std::cin >> Numero2;
    std:: cout << "\nValores antes da troca:\n";
    std::cout << "\nNumero1 = " << Numero1 << "\n";
    std::cout << "\nNumero2 = " << Numero2 << "\n";



    TrocaNumeros(&Numero1, &Numero2);
    std:: cout << "\nValores depois da troca:\n";
    std::cout << "\nNumero1 = " << Numero1 << "\n";
    std::cout << "\nNumero2 = " << Numero2;

}

void TrocaNumeros(int *pointer1, int *pointer2)
{
    int temp = *pointer1;

    *pointer1 = *pointer2;
    *pointer2 = temp;
}