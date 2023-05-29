#include <iostream>
#include <string>

int main()
{
    float Notas[5]{1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float Soma{0.0f};
    float Media;

    for(int i = 0; i < 5 ; i++){

        std::cout << "Digite a " << i+1 << " Nota: ";
        std::cin >> Notas[i];
        Soma += Notas[i];
    }

    Media = Soma / 5;

    std::cout << "Media: " << Media;

    return 0;
}