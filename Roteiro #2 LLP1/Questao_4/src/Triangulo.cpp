#include <string>
#include <math.h>
#include "Triangulo.h"

Triangulo::Triangulo(double b, double a)
{
    nome = "triangulo";
    base = b;
    altura = a;
}

double Triangulo::calcularArea()
{
    return (base * altura) / 2;
}
