#include "Poligono.h"

int Poligono::x=0;

Poligono::Poligono()
{
    //ArrayPoint temp(0);
    this->_arr = ArrayPoint(0);
    ++this->x;
    //++this->cant;
}



Poligono::Poligono(const ArrayPoint &z)
{
    //ArrayPoint temp(0);
    this->_arr = ArrayPoint(0);
    ++this->x;
    //++this->cant;
}

/*
Poligono::Poligono(const Point a[],const int tam)
{
    ArrayPoint temp(a,tam);
    this->_arr = temp;
    ++this->x;

}
*/
/*
static int Poligono::getPoli()
{
        return x;
}
*/
int Poligono::getNum()
{
    return this->_arr.getSize();
}

/*
const ArrayPoint *Poligono::getP()
{
    return &this->_arr;
}
*/
