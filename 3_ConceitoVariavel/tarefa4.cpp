#include <iostream>
#include <iomanip>


int main()
{

    int Numero1 = 100;
    float Numero2 = 3.14;
    double Numero3 = 4536.4545;
    char letra = 'a';

    std::cout << "*********************************************************************" << std::endl;

    std::cout << "Valor do Numero 1: " << Numero1 << std::endl
              << "Tamanho da Variavel Numero 1: " << sizeof(Numero1) << "Bytes" << std::endl
              << "Endereco carregado na memoria: " << &Numero1 << std::endl;
    
    std::cout << "*********************************************************************" << std::endl;

    std::cout << "Valor do Numero2: " << Numero2 << std::endl
              << "Tamanho da Variavel Numero2: " << sizeof(Numero2) << "Bytes" << std::endl
              << "Endereco carregado na memoria: " << &Numero2 << std::endl;
    
    std::cout << "*********************************************************************" << std::endl;

    std::cout << "Valor do Numero3: " << std::setprecision(6) << Numero3 << std::endl
              << "Tamanho da Variavel Numero3: " << sizeof(Numero3) << "Bytes" << std::endl
              << "Endereco carregado na memoria: " << &Numero3 << std::endl;
    
    std::cout << "*********************************************************************" << std::endl;

    std::cout << "Valor do letra: " << letra << std::endl
              << "Tamanho da Variavel letra: " << sizeof(letra) << "Bytes" << std::endl
              << "Endereco carregado na memoria: " << (void *)&letra << std::endl;
    
    std::cout << "*********************************************************************" << std::endl;

    return 0;
}