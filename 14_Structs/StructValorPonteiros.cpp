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
void AlteraDados(Aluno *Dado);
void MostraDados(Aluno *Dado);

int main()
{
    Aluno Aluno01 = {1111, "Fulano", "TI", 4, 990.50};
    Aluno *Aluno02 = new Aluno;
    Aluno Aluno03;
    AlteraDados(&Aluno03);
    system("CLS");
    MostraDados(&Aluno03);
    std::cout << "\n 1 ANTES DE MODIFICAR OS DADOS \n";
    MostrarDados(Aluno01);
    AlterarDados(Aluno01);
    std::cout << "\n 2 DEPOIS DE MODIFICAR OS DADOS \n";
    MostrarDados(Aluno01);
    std::cout << "\n 3 ANTES DE MODIFICAR COM PONTEIROS\n";
	AlteraDados(Aluno02);
	std::cout << "\n 4 DEPOIS DE MODIFICAR COM PONTEIROS \n";
	MostraDados(Aluno02);
    

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

void AlteraDados(Aluno *Dado)
{
    Dado->Nome = "Cicrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 333333;
	Dado->Mensalidade = 899.90;
}

void MostraDados(Aluno *Dado)
{
    std::cout << "**************DADOS DO ALUNO****************\n";
	std::cout << "\t Nome: " << Dado->Nome << std::endl;
	std::cout << "\t Curso: " << Dado->Curso << std::endl;
	std::cout << "\t Semestre: " << Dado->Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado->Matricula << std::endl;
	std::cout << "\t Mensalidade " << "R$ " << std::fixed << std::setprecision(2) << Dado->Mensalidade << std::endl;
	std::cout << "********************************************\n\n";
}
