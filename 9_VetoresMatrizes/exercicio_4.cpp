#include <iostream>

int main()
{
    float VetorVelocidade[]{70.9f,89.5f,65.6f,102.5f,123.6f,63.4f,74.5f,99.5f,68.7f};
    float VelocidadeMedia = 0;

    for(float Velocidade : VetorVelocidade)
    {
        VelocidadeMedia += Velocidade;
    }

    VelocidadeMedia /= sizeof(VetorVelocidade)/sizeof(float);

    std::cout << "Velocidade Media = " << VelocidadeMedia;

    return 0;
}