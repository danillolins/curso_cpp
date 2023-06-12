#include <iostream>
#include <string>


struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	struct Livro livro[5];
	
    for(int i = 0 ; i<5 ; i++)
    {
        std::cout << "***Cadastro de Livro***" << "\n";
        std::cout << "Digite ID do Livro: ";
        std::cin >> livro[i].ID;

        std::cout << "\nDigite o Título do Livro: ";
        
        std::cin.ignore();
        std::getline(std::cin, livro[i].Titulo);

        std::cout << "\nDigite o Autor do Livro: ";
        std::getline(std::cin, livro[i].Autor);

        std::cout << "\nDigite A Editora do Livro: ";
        std::getline(std::cin, livro[i].Editora);


    } 

    for(int i = 0 ; i < 5; i++)
    {
        std::cout << "ID: " << livro[i].ID << "\n";
        std::cout << "Titulo: " << livro[i].Titulo << "\n";
        std::cout << "Autor: " << livro[i].Autor << "\n";
        std::cout << "Editora: " << livro[i].Editora << "\n";
    }
	
	return 0;
}