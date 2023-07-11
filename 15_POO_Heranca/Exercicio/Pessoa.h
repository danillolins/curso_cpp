#pragma once

#include <iostream>
#include <string>

class Pessoa
{
public:
    std::string Nome;
    int CPF;
    int Matricula;

    //Pessoa() :Nome(""), CPF(0), Matricula(0) {}

    Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}

    void AcessarSistema();

};


