#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "ArrayPoint.h"

class Poligono
{
    protected:
        ArrayPoint _arr;
        //static int cant;
        int x;

    public:
        Poligono();
        Poligono(Point [],int);
        int getPoli();
        int getNum();
        const ArrayPoint *getP();
        virtual double area(){}
        //virtual ~Poligono(){}
        ~Poligono(){}
};

#endif // POLIGONO_H_INCLUDED
