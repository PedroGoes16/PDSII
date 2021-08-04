#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Ponto2D.hpp"

struct Triangulo {
    Ponto2D p1, p2, p3;

    Triangulo();
    Triangulo(Ponto2D _p1, Ponto2D _p2, Ponto2D _p3);

    double calcular_area();
    double calcular_perimetro();
    int comparar_area(Triangulo *triangulo);
};

#endif