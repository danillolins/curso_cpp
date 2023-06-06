#include <iostream>

struct Data 
{
    int Dia;
    int Mes;
    int Ano;
};

int main()
{
    Data Agenda;
    Agenda.Dia = 22;
    Agenda.Mes = 07;
    Agenda.Ano = 2013;

    std::cout << "Dia: " << Agenda.Dia << " Mes: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";
    return 0;
}