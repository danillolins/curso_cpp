#include <iostream>
#include <string>

struct Livro {
    int Id = 0;
    std::string Titulo = "Sem Titulo";
    std::string Autor= "Sem Autor";
    std::string Editora= "Sem Editora";
    int Ano = 0;
};

int main()
{
    struct Livro livro;


    std::cout << "***Cadastro de Livro***" << "\n";
    std::cout << "Digite ID do livro: " << "\n";
    std::cin >> livro.Id;
    std::cin.ignore();
    std::cout << "Digite o titulo do livro: " << "\n";
    std::cin >> livro.Titulo;
    std::cin.ignore();
    std::cout << "Digite Autor do livro: " << "\n";
    std::cin >> livro.Autor;
    std::cin.ignore();
    std::cout << "Digite a Editora do livro: " << "\n";
    std::cin >> livro.Editora;
    std::cin.ignore();
    std::cout << "Digite o ano do livro: " << "\n";
    std::cin >> livro.Ano;
    std::cin.ignore();

    std::cout << "Id: " << livro.Id << " Titulo: " << livro.Titulo << " Autor: " << livro.Autor << " Editora: " << livro.Editora << " Ano: " << livro.Ano << "\n";

    return 0;
}
