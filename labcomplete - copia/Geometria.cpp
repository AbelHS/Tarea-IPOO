#include "Geometria.h"
#include <math.h>

Point constructorPoints [4];

Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,const Point &p3 , const Point &p4 = Point (0 ,0))
{
    constructorPoints[0] = p1;
    constructorPoints[1] = p2;
    constructorPoints[2] = p3;
    constructorPoints[3] = p4;
    return constructorPoints;
}


double norma(Point a, Point b)
{
    //double temp = sqrt( pow((a.getx()+b.getx()),2)+ pow ((a.gety()+b.gety()),2) );
    return sqrt( pow((a.getx()+b.getx()),2)+ pow ((a.gety()+b.gety()),2) );
}

Rectangulo::Rectangulo(Point a, Point b):Poligono()
{
    this->a = a;
    this->b = b;

    this->c.setx(a.getx());
    this->c.sety(b.gety());
    this->d.setx(a.gety());
    this->d.sety(b.getx());

    //Point *temp = updateConstructorPoints(a,b,c,d);
    //Poligono(temp,4);
    //this->z = updateConstructorPoints(a,b,c,d);
}

Rectangulo::Rectangulo(int a, int b, int c, int d)
{
    this->a.setx(a);
    this->a.sety(b);
    this->b.setx(c);
    this->b.sety(d);

    this->c.setx(a);
    this->c.sety(d);
    this->d.setx(b);
    this->d.sety(c);

}

double Rectangulo::area()
{
    double base = norma(a,d);
    double h = norma(a,c);
    return base*h;
}

void Rectangulo::print()
{
    a.print();
    b.print();
    c.print();
    d.print();
}

Rectangulo::~Rectangulo(){}



Triangulo::Triangulo(Point a, Point b, Point c):Poligono()
{
    this->a = a;
    this->b = b;
    this->c = c;

}


double Triangulo::area()
{
    double x = norma(a,b);
    double y = norma(b,c);
    double z = norma(a,c);
    double w = (x+y+z)/2;

    return sqrt( w*(w-x)*(w-y)*(w-z) );
}

void Triangulo::print()
{
    a.print();
    b.print();
    c.print();
}
