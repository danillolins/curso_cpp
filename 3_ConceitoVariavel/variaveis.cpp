#include <iostream>
#include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
    int NumVidas = 5;
    int Score = 1350;

    std::cout << "***************" << std::endl;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Pontuacao: " << Score << std::endl;
    std::cout << "Endereço que Numvidas Ocupa na memoria RAM: " << &NumVidas << std::endl;
    std::cout << "***************" << std::endl;

}