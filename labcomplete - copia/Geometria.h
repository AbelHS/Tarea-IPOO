#ifndef GEOMETRIA_H_INCLUDED
#define GEOMETRIA_H_INCLUDED
#include "Poligono.h"


class Rectangulo : public Poligono
{
        Point a;
        Point b;
        Point c;
        Point d;

        Point *z;

    public:
        Rectangulo(){}
        Rectangulo(Point, Point);
        Rectangulo(int, int, int, int);
        double area();
        void print();
        ~Rectangulo();

};

class Triangulo : public Poligono
{
        Point a;
        Point b;
        Point c;

        Point *z;
    public:
        Triangulo(){}
        Triangulo(Point, Point, Point);
        double area();
        //double Herons();
        void print();
        ~Triangulo(){}

};

#endif // GEOMETRIA_H_INCLUDED
