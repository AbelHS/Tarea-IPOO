#include <iostream>
using namespace std;

///2.1
#define min(a,b) ( a<b? a:b)

///2.2
template <typename T>
T minimo(T a, T b)
{
    return ( a<b? a:b);
}

/*** 3.1
class poligono{};
class triangulo :public poligono{};
class rectangulo:public poligono{};

triangulo *T = new triangulo();
rectangulo *R = new rectangulo();

triangulo *PT = static_cast<triangulo *>(R); /// casteamos el puntero rectangulo a triangulo


***/
///3.2
/***

triangulo *PT = dynamic_cast<triangulo *>(R);

***/


template <class T>
class nodo
{
    public:
    nodo<T> *sig;
    T dato;
    nodo();
    nodo(T);
    ~nodo(){}
};

template <class T>
nodo<T>::nodo()
{
    dato = 0;
    sig = NULL;
}

template <class T>
nodo<T>::nodo(T d)
{
    dato = d;
    sig = NULL;
}

template <class T>
class Pila
{
    public:
    	int tamanho;

        Pila();
        void Push(const T Dato);
        void Pop();
        void Print();
        bool empty_();
        T& top();
        int _size();

        friend Pila<T> operator+(const Pila<T> &p1,const Pila<T> &p2)
        {
            Pila<T> temp = p1;
            nodo<T> *temp2 = p2.cima;


            for (int i=0; i < p2.tamanho ; ++i)
            {
                temp.Push( temp2->dato );
                //temp.Push( p2.top() );
                temp2 = temp2->sig;
            }
            return temp;
        }

        ~Pila(){}

    protected:
    private:
    	nodo<T> *cima;
//    	int tamanho;
};

/*
template <typename T>
Pila<T> Pila<T>::operator+(const Pila<T> &s1, const Pila<T> &s2)
{
    Pila<T> temp = p1;
    nodo<T> *temp2 = p2.cima;

    for (int i=0; i < p2.tamanho ; ++i)
    {
        temp.Push( temp2->dato );
        //temp.Push( p2.top() );
        temp2 = temp2->sig;
    }
    return temp;
}

*/

template <typename T>
Pila<T>::Pila()
{
    tamanho = 0;
    cima = 0;
}


template <typename T>
void Pila<T>::Push(T ele)
{
    nodo<T> *nuevo;
    nuevo = new nodo<T>(ele);
    nuevo->sig = cima;
    cima = nuevo;
    tamanho++;
}


template <typename T>
int Pila<T>::_size()
{
    return this->tamanho;
}


template <typename T>
void Pila<T>::Pop()
{
	//T temp = cima->dato;
    cima = cima->sig;
    //return temp;
}

template <typename T>
void Pila<T>::Print()
{
    nodo<T> *temp = cima;
    while(temp !=NULL)
    {
        cout << temp->dato <<endl;
        temp = temp->sig;
    }
}

template <typename T>
bool Pila<T>::empty_()
{
    if(cima)
        return true;

    return false;
}

template <typename T>
T& Pila<T>::top()
{
    if(cima)
        return cima->dato;

//   return T(0);
}
///template class Pila<int>;
///template class Pila<double>;


int main()
{

    Pila<int> a;

    a.Push(4);
    a.Push(2);

    //cout << a._size();
    Pila<int> b;
    b.Push(42);
    b.Push(22);

    Pila<int> c;

    c=a+b;
    c.Print();

    ///cout <<min(4,8);


    return 0;
}
