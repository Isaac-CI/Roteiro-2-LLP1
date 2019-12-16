#include <string>
#include "Trabalhador.h"

Trabalhador::Trabalhador(std::string n, double s)
{
    nome = n;
    salario = s;
}

Trabalhador::Trabalhador()
{
    nome = "";
    salario = 0;
}
