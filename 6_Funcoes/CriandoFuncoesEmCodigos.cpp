#include <iostream>
#include <locale.h>

void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);

int main()
{
    ExibirMenu();
	system("PAUSE");
	return 0;
}

void ExibirMenu() 
{
    setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";

        ProcessarEscolha(RetornarEscolha());

    } while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
    int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	//Colocar a chamada da função ProcessarEscolha
	ProcessarEscolha(escolha);
	return escolha;
}


void ProcessarEscolha(int TipoEscolha)
{
    switch (TipoEscolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n";
		}

}