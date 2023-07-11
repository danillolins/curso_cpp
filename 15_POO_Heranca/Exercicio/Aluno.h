#pragma once

#include <iostream>
#include <string>
#include "Pessoa.h"

class Aluno : public Pessoa
{
public:
   std::string Curso;
	Aluno(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso) : Pessoa(NovoNome, NovoCPF, NovaMatricula), Curso(NovoCurso) {}
   void RealizarProva(); 

};

