#include <iostream>
//A diretiva de pré-processador #include
//Indica para incluir o arquivo de cabeçalho
//iostream

int main() 
//função principal. Todo programa C++ começa com essa função principal main()
{
    //cout comando de saída de dados 
    //neste caso está solicitando para colocar na saida padrão (tela) a frase especificada
    std::cout << "Nome: Danillo" << std::endl;
    //endl indica para inserir um caracter de quebra de linha  na frase ("string")
    std::cout << "Idade: 30" << std::endl;
    std::cout << "Hello World" << std::endl;
    system("PAUSE");
    //Chama o shell do windows e coloca o comando PAUSE
    return 0;
}