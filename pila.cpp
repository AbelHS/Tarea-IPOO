#include "pila.h"
#include <iostream>

using namespace std;

pila::pila()
{
    cima = NULL;
}

void pila::insertar(int ele)
{
    nodo *nuevo;
    nuevo = new nodo(ele);
    nuevo->sig = cima;
    cima = nuevo;
}

int pila::quitar()
{
    int aux = cima->dato;
    cima = cima->sig;
    return aux;
}

void pila::imprimir()
{
    nodo *temp;
    temp = cima;
    while(cima)
    {
        cout << cima->dato;
        cima = cima->sig;
    }
}
