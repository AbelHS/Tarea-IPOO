#ifndef ARRAYPOINT_H_INCLUDED
#define ARRAYPOINT_H_INCLUDED
#include "Point.h"

class ArrayPoint
{
    int tamanho;
    Point *aray;
    public:

        ArrayPoint();
        ArrayPoint(int);
        ArrayPoint(Point [], const int);
        ArrayPoint(const ArrayPoint &){}
        //ArrayPoint(ArrayPoint &);


        void prueba(ArrayPoint &);
        void print();
        void _push_back(const Point &);
        void _insert(const int position, const Point &);
        void _remove(const int position);

        //const int PointArray::getSize() const
        void _set(Point);
        Point _get(int);
        const int getSize();
        void _clear();


        ~ArrayPoint();
};
#endif // ARRAYPOINT_H_INCLUDED
