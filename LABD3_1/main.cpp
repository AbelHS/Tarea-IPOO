
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int mod(int a, int b) {
	int r, q;
	q = a/b;
	r = a-(b*q);
	if(r<0){return r+b;}
	return r;
}

int qq(int a, int b) {
	int r, q;
	q = a/b;
	r = a-(b*q);
	if(r<0){
        q--;
        return b;}
	return b;
}

class Cesar
{
        int clave;
    public:
        Cesar(int);
        //string cifrar(const string);
        //string descifrar(const string);
        void cifrar(const string);
        void descifrar(const string);
        string alfabeto;
        ofstream escritura;
        ifstream lectura;
};

Cesar::Cesar(int clave)
{
    this->clave = clave;
    alfabeto = "abcdefghijklmnopqrstuvwxyz ";
}

void Cesar::cifrar(const string mensaje)
{
    string temp=mensaje;
    int j=0;
    while(mensaje[j] != '\0'){
        temp[j] = alfabeto[mod(alfabeto.find(mensaje[j]+clave),alfabeto.size())];
        j++;
    }
    escritura.open("cifrado.txt");
    escritura << temp;
    escritura.close();
}


void Cesar::descifrar(const string name)
{
    lectura.open(name);
    string temp;
    getline(lectura,temp);
    int j=0;
    while(temp[j] != '\0'){
        temp[j] = alfabeto[mod(alfabeto.find(temp[j]-clave),alfabeto.size())];
        j++;
    }
    cout << temp;
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
    cout << t1 <<" "<< s1;
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

int main()
{
    euclidesX(250,111);
    cout << endl;
    cout << mcd(250,111);
    cout << endl;
    Cesar a(3);

    a.cifrar("hola mundo");
    a.descifrar("cifrado.txt");
    cout << funcionloca(3,21,26) << endl;
    return 0;
}



