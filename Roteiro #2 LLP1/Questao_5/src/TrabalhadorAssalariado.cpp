#include <string>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double s)
{
    nome = n;
    salario = s;
}

double TrabalhadorAssalariado::calcularPagamentoSemanal()
{
    return salario / 4;
}
