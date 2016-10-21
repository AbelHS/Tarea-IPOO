#include "ArrayPoint.h"

///constructor por defecto instancia arreglo de 0 elementos
ArrayPoint::ArrayPoint()
{
    tamanho = 0;
    this->aray = new Point[tamanho];
}

///constructor  instancia arreglo de x elementos
///usa contructor por defecto de clase Point es decir crea los x Point del
///arreglo con 0,0
///despues actualiza el tamano
ArrayPoint::ArrayPoint(int x)
{

    this->aray = new Point[x];
    tamanho = x;
}


///este constructor no tiene sentido les recomiendo que lo dejen para el final
///igual le envie un correo al profe para preguntar pero facil no me responde hasta mañana

ArrayPoint::ArrayPoint(Point a[], const int x)
{
    this->aray = new Point[x];
    this->aray = a;
    tamanho = x;
    //a = new Point[x];
}



        //ArrayPoint(const ArrayPoint &);
        //this->x = p.x;

/*
ArrayPoint::ArrayPoint(ArrayPoint &p)
{


    int temp = p.getSize();


    for(int i=0; i<temp; i++)
        {

            //void _insert(const int position, const Point &);

            //Point _get(int);

            this->_insert(i, p._get(i));
            //p.aray[0].print();
            //this->aray[i] = p.aray[i];

            //o.aray[i].print();


            //p.aray[0].print();

        }
        /*
    o.aray[1].print();
    o.aray[2].print();
    o.aray[3].print();
    o.aray[0].print();



}

void ArrayPoint::prueba(ArrayPoint &p)
{


    int temp1 = p.getSize();

    for(double i=0.0; i<temp1; i++)
        //this->aray->__insert(i, p._get(i));
        {
            Point temp;
            temp.setx(p.aray[i].getx(i));
            temp.sety(p.aray[i].gety(i));
            this->aray[i] = temp;
            //this->_insert(i, p._get(i));

        }
}
*/


///inserta en "position" el punto "p"
///si "position" es mayor que tamanho manda error
///falta lo que pidio el profe que tenemos que mover hacia la derecha si ya existe la posicion
void ArrayPoint::_insert(const int position, const Point &p)
{
    int temp = this->getSize();
    if(temp<position)
        cout << "error" << endl;
    else
    {
        Point temp = aray[position];
        aray[position] = p;

        for(int i=1; (i+position)< tamanho; i++)
        {
            /*
            aray[position+i].print();
            cout << "n" <<endl;
            aray[position].print();
            /*/
            Point temp2 = aray[position+i];
            aray[position+i] = temp;
            temp = temp2;

        }

    }
}

//Función para adicionar un Point al final del arreglo
void ArrayPoint::_push_back(const Point &p)
{

}

/*
void ArrayPoint::_set(Point p)
{
    this->aray
}
*/

Point ArrayPoint::_get(int x)
{
    return this->aray[x];
}


///imprime usando la funcion print de clase Point
void ArrayPoint::print()
{
    int x = this->getSize();
    for (int i = 0 ; i < x ; i++)
    {
       cout << endl<< "arreglodePuntos[" << i <<"]"<<endl;
       aray[i].print();
    }
}
        //const int PointArray::getSize() const
const int ArrayPoint::getSize(){return tamanho;}

ArrayPoint::~ArrayPoint(){}
