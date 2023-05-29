//inverter um vetor
#include <iostream>

void DuplicarVetor(int *Array, int Tam);
int *InverteVetor(int *Array, int Tam);
void MostrarVetor(int *Array, int Tam);


int main ()
{
    int Numeros[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
    int Tam = sizeof(Numeros)/sizeof(int);

    MostrarVetor(Numeros, Tam);
    DuplicarVetor(Numeros, Tam);
    MostrarVetor(Numeros, Tam);
    MostrarVetor(InverteVetor(Numeros,Tam), Tam);

    return 0;
}

void DuplicarVetor(int *Array, int Tam)
{
    for(int i = 0 ; i < Tam ; i++) 
    {
        Array[i] = 2 * Array[i];
    }

}
int *InverteVetor(int *Array, int Tam)
{
    int j = 0;
    static int ArrayInvertido[10];

    for(int i = Tam -1; i >= 0 ; i--) 
    {
        ArrayInvertido[j] = Array[i];
        j++;
    } 

    return &ArrayInvertido[0];
}
void MostrarVetor(int *Array, int Tam)
{
    std::cout <<"[ ";
    for(int i=0 ; i < Tam ; i++)
    {
        std::cout << Array[i] << "  ";
    }
    std::cout << "] \n \n";
}