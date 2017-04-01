#include "public.h"

int mod(int a, int b) {
	int r, q;
	q = a/b;
	r = a-(b*q);
	if(r<0){return r+b;}
	return r;
}

int funcionloca(int plano,  int cifrado, int alfabeto)
{
    //int plano = 3;
    //int cifrado = 21;
    //int alfabeto = 26;
    int m=0; ///sera igual a la publica
    int privada=1;
    int temp; ///numero multiplicado cifradoXprivado

    while(m !=plano)
    {
        ++privada;
        temp = cifrado*privada;
        m = mod(temp, alfabeto);
    }
    return privada;
}


int euclidesX(int a, int b)
{
    int r1 = a, r2 =b;
    int s1 = 1, s2 =0;
    int t1 = 0, t2 =1;
    int q, r, s, t;
    while (r2>0)
    {
        q = r1/r2;

        r = mod(r1 ,r2);
        //r = r1-q*r2;
        r1 = r2;
        r2 = r;

        s = s1-q*s2;
        s1 = s2;
        s2 = s;

        t = t1-q*t2;
        t1 = t2;
        t2 = t;
    }
    cout << " valor y "<< t1;
    return s1;
}

int mcd(int a, int b)
{
    int _a = a;
    int _b = b;
    int r = mod(_a,_b);
    while(r>0)
    {   _a = _b;
        _b = r;
        r = mod(_a,_b);
    }
    return _b;
}
