#include <iostream>
#include "pila.h"
#include "cola.h"
using namespace std;

int main()
{
    cola a;

    a.insertar(7);
    a.insertar(5);
    a.insertar(1);

    a.imprimir();

    return 0;
}
