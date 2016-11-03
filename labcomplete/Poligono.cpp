#include "Poligono.h"

Poligono::Poligono()
{
    //ArrayPoint temp(0);
    this->_arr = ArrayPoint(0);
    ++this->x;
    //++this->cant;
}

Poligono::Poligono(Point a[],int tam)
{
    ArrayPoint temp(a,tam);
    this->_arr = temp;
    ++this->x;

}

int Poligono::getPoli()
{
        return this->x;
}

int Poligono::getNum()
{
    return this->_arr.getSize();
}

const ArrayPoint *Poligono::getP()
{
    const ArrayPoint *temp = &this->_arr;
    return temp;
}
