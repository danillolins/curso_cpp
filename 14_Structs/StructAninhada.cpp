#include <iostream>
#include <cstring>

struct Data {
    int Dia;
    int Mes;
    int Ano;
};

struct Endereco
{
    /* data */
    std::string Rua;
    std::string Cidade;
    std::string Estado;
    std::string Pais;
};

struct Pessoa
{
    /* data */
    std::string Nome;
    Data DtNascimento;
    Endereco Endereco;
};


int main()
{

    Pessoa Pessoa01;
    Pessoa01.Nome = "Udemy";
    Pessoa01.DtNascimento.Dia = 01;
    Pessoa01.DtNascimento.Mes = 02;
    Pessoa01.DtNascimento.Ano = 2009;
    Pessoa01.Endereco.Rua = "Rua A";
    Pessoa01.Endereco.Cidade = "Sao Francisco";
    Pessoa01.Endereco.Estado = "California";
    Pessoa01.Endereco.Pais = "Estados Unidos";

    std::cout << "-->" << Pessoa01.Nome << "\n";
    std::cout << "-->" << Pessoa01.DtNascimento.Dia << "\n";
    std::cout << "-->" << Pessoa01.DtNascimento.Mes << "\n";
    std::cout << "-->" << Pessoa01.DtNascimento.Ano << "\n";
    std::cout << "-->" << Pessoa01.Endereco.Rua << "\n";
    std::cout << "-->" << Pessoa01.Endereco.Cidade << "\n";
    std::cout << "-->" << Pessoa01.Endereco.Estado << "\n";
    std::cout << "-->" << Pessoa01.Endereco.Pais << "\n";

    return 0;
}