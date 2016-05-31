#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "nodo.h"

class cola
{
    public:
    nodo *inicio;
    nodo *fin;
    cola();
    void insertar(int);
    void imprimir();
    int quitar();
    ~cola(){}
};

#endif // COLA_H_INCLUDED
