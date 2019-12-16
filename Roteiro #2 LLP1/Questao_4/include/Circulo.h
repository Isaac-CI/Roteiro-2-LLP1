#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"


class Circulo : public FiguraGeometrica
{
    public:
        Circulo(double);
        double calcularArea();

    protected:

    private:
        double raio;
};

#endif // CIRCULO_H
