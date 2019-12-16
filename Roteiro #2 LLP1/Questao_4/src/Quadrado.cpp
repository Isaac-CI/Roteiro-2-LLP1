#include <string>
#include <math.h>
#include "Quadrado.h"

Quadrado::Quadrado(double l)
{
    nome = "quadrado";
    lado = l;
}

double Quadrado::calcularArea()
{
    return lado * lado;
}
