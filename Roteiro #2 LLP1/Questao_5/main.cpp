#include <string>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <iostream>

using namespace std;

int main()
{
    TrabalhadorAssalariado novato = TrabalhadorAssalariado("Estagiario", 2000);
    TrabalhadorPorHora senior = TrabalhadorPorHora("Antonio", 100);
    cout << novato.nome << "\n" << novato.calcularPagamentoSemanal() << endl;
    cout << senior.nome << "\n" << senior.calcularPagamentoSemanal(47) << endl;
    return 0;
}
