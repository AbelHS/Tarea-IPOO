#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class nodo
{
    public:
    nodo * sig;
    int dato;
    nodo();
    nodo(int);
    ~nodo(){}
};

#endif // NODO_H_INCLUDED
