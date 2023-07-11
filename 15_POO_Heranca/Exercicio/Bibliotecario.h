#pragma once
#include <iostream>
#include <string>
#include "Pessoa.h"

class Bibliotecario : public Pessoa
{
public:
    Bibliotecario(std::string NovoNome, int NovoCPF, int NovaMatricula) : Pessoa(NovoNome, NovoCPF, NovaMatricula){}
    void CadastrarLivros();
};

