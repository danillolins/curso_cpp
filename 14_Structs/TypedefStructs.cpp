#include <iostream>
#include <string>
typedef struct Livro
{
    int ID;
    float Preco;
    std::string Titulo;
    std::string Editora;
} RegistroLivro;

int main()
{
    struct Livro Aluno01;
    RegistroLivro Aluno02;
    
    RegistroLivro* Ponteiro;
    Ponteiro = &Aluno02;
    Ponteiro->ID = 0002;
    Ponteiro->Preco = 99.99;
    Aluno02.ID = 0001;
    Aluno02.Preco = 33.99;
    Aluno02.Titulo = "Matrix";
    Aluno02.Editora = "Abril";

    return 0;
}