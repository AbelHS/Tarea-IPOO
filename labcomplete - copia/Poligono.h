#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "ArrayPoint.h"

class Poligono
{
    protected:
        ArrayPoint _arr;
        //static int cant;
        //int x;
        static int x;
    public:
        Poligono();
        Poligono(const ArrayPoint &);
        Poligono(const Point [],const int);
       // static int getPoli();
        static int getPoli(){return x;}
        int getNum();
        const ArrayPoint *getP() const{return &this->_arr;}
        virtual double area()=0;
        //virtual ~Poligono(){}
        ~Poligono(){}
};

#endif // POLIGONO_H_INCLUDED
