#include "Point.h"
#include "ArrayPoint.h"



int main()
{



    Point a =  Point(4,5);
    Point b =  Point(5,4);
    Point c =  Point(6,6);
    ArrayPoint temp = ArrayPoint(4);
    Point *tt = new Point[4];

    // temp6 = temp.getSize();
    //cout << temp6 << endl;
    temp._insert(2,a);
    //cout << "2"<< endl;
    temp._insert(2,b);

    //temp._insert(2,c);

    ArrayPoint ty = ArrayPoint(tt,7);
    ty.print();


    return 0;
}
