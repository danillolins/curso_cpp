#include <iostream>
#include <ctime>

int main()
{
    time_t HoraAtual = time(0);
    tm *MinhaHora = localtime(&HoraAtual);
    std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec << "\n";
    std::cout << "\nDia:" << MinhaHora->tm_mday << "/" << 1 + MinhaHora->tm_mon << "/" << 1900 + MinhaHora->tm_year << "\n";
    return 0;
}