#ifndef AFIN_H
#define AFIN_H

#include "public.h"

class Afin
{

        int claveAI;
    public:
        int claveB;
        string alfabeto;
        Afin();
        string cifrar();
        string descifrar();
        int generar();
        virtual ~Afin();
    protected:
    private:
};

#endif // AFIN_H
