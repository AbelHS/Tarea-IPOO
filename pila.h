#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "nodo.h"

class pila
{
    public:
    nodo *cima;
    pila();
    void insertar(int);
    int quitar();
    void imprimir();
    ~pila(){}

};



#endif // PILA_H_INCLUDED
