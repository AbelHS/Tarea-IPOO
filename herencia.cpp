#include <iostream>
using namespace std;

class vehiculo
{
    public:
    vehiculo(int, int, float);
    ~vehiculo(){};
    int gpeso();
    int gveloc();
    float gprecio();
    void print();

    private:
    int peso, velocidad;
    float precio;

};

/*clase derivafa*/
class Auto : public vehiculo
{
    public:
    Auto();
    Auto(int, int, float, int);
    ~Auto(){};
    int gpotencia();
    void print();

    private:
    int poten;
};

vehiculo::vehiculo(int pe, int vel, float pre)
{
    peso = pe;
    velocidad = vel;
    precio = precio;

}

int vehiculo::gpeso()
{
    return peso;}

int vehiculo::gveloc()
{
    return velocidad;}

float vehiculo::gprecio()
{
      return precio;}

void vehiculo::print()
{
    cout << "\nPeso " << peso;
    cout << "\nVelocidad " << velocidad;
    cout << "\nPrecio " << precio;
}


/*clase derivada
class Auto:public vehiculo
{
    public:
    Auto();
    Auto(int, int, float, int);
    ~Auto();
    int gpotencia();
    void print();

    private:
    int poten;
};*/


Auto::Auto(int pe, int vel, float pre, int pot):vehiculo(pe, vel, pre)
{
    poten = pot;
}

int Auto::gpotencia()
{
    return poten;
}

void Auto::print()
{
    vehiculo::print(); /* heredado de la clase padre*/
    cout << endl;
    cout << "Caballos Potencia " << poten << endl;
}

int main()
{
    vehiculo unvehiculo(4500,120,3000);
    cout << "un vehiculo";
    unvehiculo.print();
    cout << endl;
    cout << endl;
    /* ahora objeto derivado*/
    Auto unauto(3200,100,1200,120);
    cout << "un auto" << endl;
    unauto.print();

    return 0;
}
