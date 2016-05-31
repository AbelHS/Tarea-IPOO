#include "cola.h"
#include <iostream>

using namespace std;

cola::cola()
{
    inicio = fin = NULL;
}

void cola::insertar(int ele)
{
    nodo *nuevo;
    nuevo = new nodo(ele);
    if(!inicio)
    {
        inicio = nuevo;
    }
    else
    {
    fin->sig = nuevo;
    }
    fin = nuevo;
}

int cola::quitar()
{
    int aux = inicio->dato;
    nodo *temp = inicio;
    inicio = inicio->sig;
    delete temp;
    return aux;
}

void cola::imprimir()
{
    nodo *temp;
    temp = inicio;
    while(inicio)
    {
        cout << inicio->dato;
        inicio = inicio->sig;
    }
}
