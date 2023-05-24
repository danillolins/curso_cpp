#include <iostream>


int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
    int SomaDosNumeros;
    SomaDosNumeros = Numero + NumeroASerSomado;
    return SomaDosNumeros;
}

void Mensagem()
{
    std::cout << "\nMensagem de Marte... Chegamos bem...\n";
}

int main() 
{
    int Numero, NumeroASerSomado;
    std::cout << "Digite um numero: " << "\n";
    std::cin >> Numero;
    std::cout << "Digite o numero a ser somado: " << "\n";
    std::cin >> NumeroASerSomado;
    std::cout << "Valor da soma: " << SomaAUmNumero(Numero, NumeroASerSomado);
    Mensagem();
    return 0;
}