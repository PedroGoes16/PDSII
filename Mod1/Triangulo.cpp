#include "Triangulo.hpp"

Triangulo::Triangulo(){}

Triangulo::Triangulo(Ponto2D _p1, Ponto2D _p2, Ponto2D _p3){
    this->p1 = _p1;
    this->p2 = _p2;
    this->p3 = _p3;
}

double Triangulo::calcular_perimetro(){
    double a, b, c;

    a = this->p1.calcular_distancia(&this->p2);
    b = this->p2.calcular_distancia(&this->p3);
    c = this->p3.calcular_distancia(&this->p1);
    
    return a+b+c;
}

double Triangulo::calcular_area(){
    double a, b, c;

    a = this->p1.calcular_distancia(&this->p2);
    b = this->p2.calcular_distancia(&this->p3);
    c = this->p3.calcular_distancia(&this->p1);

    double p = (a + b + c)/2 ;

    return sqrt(p*(p - a)*(p - b)*(p - c));
}

int Triangulo::comparar_area(Triangulo *triangulo){
    if(this->calcular_area() < triangulo->calcular_area()){
        return -1;
    } if(this->calcular_area() == triangulo->calcular_area()){
        return 0;
    } else {
        return 1;
    }
}