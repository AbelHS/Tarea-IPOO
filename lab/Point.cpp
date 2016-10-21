#include "Point.h"

Point::Point()
{
    this->x = 1.0;
    this->y = 1.0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::Point(const Point &p)
{
    this->x = p.x;
    this->y = p.y;
}

void Point::setx(double x)
{
    this->x = x;
}

void Point::sety(double y)
{
    this->y = y;
}

double Point::getx()
{
    return this->x;
}

double Point::gety()
{
    return this->y;
}

void Point::print()
{
    cout<<"valor de x es : " << x<<endl;
    cout<<"valor de y es : " << y<<endl;
}

void Point::mody(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point(){}
