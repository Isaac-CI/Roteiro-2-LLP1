#include <string>
#include <math.h>
#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    nome = "Poligono regular";
}

double FiguraGeometrica::calcularArea(int nLados, double cLados)
{
    return (nLados * (pow(cLados, 2))) / (4 * tan(3.14159/nLados));
}
