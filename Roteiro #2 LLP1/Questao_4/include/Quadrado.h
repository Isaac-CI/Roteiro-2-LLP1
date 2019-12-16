#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado(double);
        double calcularArea();

    protected:

    private:
        double lado;
};

#endif // QUADRADO_H
