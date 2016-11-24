#include <iostream>
#include <vector>

using namespace std;
#define min2(x,y){x < y ? x: y}
template < typename t>

t min1( const t a1 , const t a2)
{
    if (a1 < a2)
        return a1;
    else{
        return a2;
    }
    return 0;
}

static_cast <triangulo*>(p)

dynamic_cast <triangulo*>(p)


template <class T> //class para que funcione el 4
class Stack{

public:
    vector<T> data;
    bool Empty();
    void Push(T item);
    T Top();
    void Pop();
    void print();


};



template <class T>
bool Stack<T>::Empty()  //funcion vacio
{
    return data.empty();
}

template <class T>
void Stack<T>::Push(T item)//funcion agregar
{
    data.push_back(item);

}

template <class T>
T Stack<T>::Top()//funcion imprimir
{
    if(data.back()>-1)
    return data.back();

    else
        cerr<<"Stack esta vacia\n";
}

template <class T>
void Stack<T>::Pop() //funcion elimira
{
    data.pop_back();
}


int main()
{

    char a=min1('z','b');
    cout<<"el mayor es "<<a<<"\n";
    int b=min2(1,8);
    scout<<"el mayor es "<<b<<"\n";

    Stack<int> t;
    for (int x=0;x<10;x++){
        t.Push(x);
        cout << t.data[x] << endl;
}
}
