#include <iostream>

class Casa
{
    private:
        int NumQuartos{4};
        float Tamanho{90.0f};
        bool bTemSuite{false};

    public:
        void MostrarTamanho();
        int ObtenhaNumerodeQuartos();
        bool TemSuite();
        void SetNumQuartos(int Num);
};

void Casa::MostrarTamanho()
{
    std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumerodeQuartos()
{
    return NumQuartos;
}

bool Casa::TemSuite()
{
    return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
    if(Num <= 6 && Num>=0)
    {
        NumQuartos = Num;
    }
    else
    {
        std::cout << "\nNumero de quartos invalidos\n";
    }
}


int main()
{
    Casa CasaDePraia;
    CasaDePraia.MostrarTamanho();
    std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumerodeQuartos();
    std::cout << "\n Tem Suite? ";
    CasaDePraia.TemSuite() ? (std::cout << "Sim\n") : (std::cout << "Nao\n");
    CasaDePraia.SetNumQuartos(100);

    return 0;
}