#include "Afin.h"

Afin::Afin()
{
    //this->clave = clave;
    alfabeto = "abcdefghijklmnopqrstuvwxyz ";
}

string Afin::cifrar()
{


}

string Afin::descifrar()
{


}



int Afin::generar()
{
    int temp = 1;
    int ale=0;
    while(ale != 1)
    {
        ale = mcd(temp, alfabeto.size());
        temp++;
    }
    cout << temp <<endl;
    return ale;
}


Afin::~Afin()
{
    //dtor
}
