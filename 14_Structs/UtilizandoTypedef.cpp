#include <iostream>


typedef int inteiro;
typedef char caractere;
typedef float real;

int main()
{
    inteiro Numero{ 12 };
    caractere Letra{ 'A' };
    real Nota{ 7.0 };
    std::cout << Numero <<"\n";
    std::cout << Letra <<"\n";
    std::cout << Nota <<"\n";
    return 0;
}