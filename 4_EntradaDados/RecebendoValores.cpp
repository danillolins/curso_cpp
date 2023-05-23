#include <iostream>

int main()
{
    int Numero01, Numero02;
    int Num1, Num2, Num3, Num4;

    std::cout << "Digite o primeiro numero:" << "\n";
    std::cin >> Numero01;
    std::cout << "Numero01 = " << Numero01 << std::endl;
    std::cout << "Digite o segundo numero:" << "\n";
    std::cin >> Numero02;
    std::cout << "Numero02 = " << Numero02 << std::endl;

    std::cout << "Digite Quatro numeros separados por espaco e pressione ENTER: ";
	
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	
	std::cout << "\nSoma = " << (Num1 + Num2 +Num3 + Num4) << std::endl;
 
	return 0;

}