#include <string>
#include <math.h>
#include "Circulo.h"

Circulo::Circulo(double r)
{
    nome = "circulo";
    raio = r;
}

double Circulo::calcularArea()
{
    return 3.14 * raio * raio;
}
