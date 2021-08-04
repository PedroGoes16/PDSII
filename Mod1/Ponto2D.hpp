#ifndef PONTO2D_H
#define PONTO2D_H

#include <iostream>
#include <cmath>

struct Ponto2D {
    double x, y;

    Ponto2D();
    Ponto2D(double _x, double _y);
    double calcular_distancia(Ponto2D *ponto);
};

#endif