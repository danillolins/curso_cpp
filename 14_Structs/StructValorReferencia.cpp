#include <iostream>
#include <string>
#include <iomanip>

struct Aluno
{
    long int Matricula;
    std::string Nome;
    std::string Curso;
    int Semestre;
    double Mensalidade;
};

void MostrarDados(struct Aluno Dado);
void AlterarDados(struct Aluno &Dado);

int main()
{
    Aluno Aluno01 = {1111, "Fulano", "TI", 4, 990.50};
    system("CLS");
    std::cout << "\n ANTES DE MODIFICAR OS DADOS \n";
    MostrarDados(Aluno01);
    AlterarDados(Aluno01);
    std::cout << "\n DEPOIS DE MODIFICAR OS DADOS \n";
    MostrarDados(Aluno01);
    return 0;
}

void MostrarDados(Aluno Dado)
{
    std::cout << "**************DADOS DO ALUNO****************\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade " << "R$ " << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
	std::cout << "********************************************\n\n";
}

void AlterarDados(Aluno &Dado)
{
    Dado.Nome = "Beltrano";
    Dado.Curso = "Engenharia";
    Dado.Semestre = 1;
    Dado.Matricula = 222222;
    Dado.Mensalidade = 870.99;
}
