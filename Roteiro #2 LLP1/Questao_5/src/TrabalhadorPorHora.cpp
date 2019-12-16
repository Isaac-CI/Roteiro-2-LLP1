#include <string>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double v)
{
    nome = n;
    salario = 0;
    valorDaHora = v;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais)
{
    if(horasSemanais > 40)
    {
        return (valorDaHora * 40) + ((valorDaHora * 1.5) * (horasSemanais - 40));
    }
}
