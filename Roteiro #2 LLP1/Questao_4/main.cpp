#include <string>
#include <math.h>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include <iostream>

using namespace std;

int main()
{
    FiguraGeometrica poligono = FiguraGeometrica();
    cout << poligono.calcularArea(10, 10) << endl;
    Circulo bola = Circulo(15);
    cout << bola.calcularArea() << endl;
    Triangulo triple = Triangulo(3, 4);
    cout << triple.calcularArea() << endl;
    Quadrado square = Quadrado(1);
    cout << square.calcularArea() << endl;
    return 0;
}
