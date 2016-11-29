#include <iostream>
#include <vector>
using namespace std;

/***
    Patron Servant

***/

class Position
{
    public:
        int x;
        int y;
        Position(){}
        Position(int x, int y){this->x=x; this->y=y;}
};


class Movable
{
    public:

        Movable(){p=new Position(0,0);}
        virtual void setposition(Position *p)=0;
        Position *p;
        ~Movable(){delete p;}
};

class Servant
{
    public:
        void _move(Movable &item, Position *donde)
        {
            item.setposition(donde);
            cout << "movido con exito " << endl;
        }
};


class triangulo: public Movable
{

    public:
        triangulo(){}
        ~triangulo(){}
        void setposition(Position *p){this->p=p;}
};

class rectangulo: public Movable
{

    public:
        rectangulo(){}
        ~rectangulo(){}
        void setposition(Position *p){this->p=p;}
};

int main()
{
    Movable *a = new triangulo();
    Movable *b = new rectangulo();

    Position *y = new Position(5,6);

    Servant *x;

    x->_move(*a , y);

    return 0;
}


/***

    Null Object Design Pattern

***/
/*
class animal
{
    public:
        virtual void make_sound() = 0;
};

class dog : public animal
{
    void make_sound() { cout << "woof!" << endl; }
};

class null_animal : public animal
{
    void make_sound() { }
};

int main()
{
    animal *uno = new null_animal();
    uno->make_sound();

    uno = new dog();
    uno->make_sound();

    return 0;
}
*/


/***

    Iterator Design Pattern

***/

///Pila
/*
class Stack;


class StackIter
{

    Stack *stk;
    int index;
  public:

    //Stack *stk;
    //int index;

    StackIter(Stack *s)
    {
        stk = s;
    }

    void first()
    {
        index = 0;
    }
    void next()
    {
        index++;
    }
    bool isDone();

    int currentItem();

    StackIter *createIterator()
    {
        return new StackIter(stk);
    }
};


class Stack
{
    int items[10];
    int sp;
  public:
    friend class StackIter;
    Stack()
    {
        sp =  - 1;
    }
    void push(int in)
    {
        items[++sp] = in;
    }
    int pop()
    {
        return items[sp--];
    }
    bool isEmpty()
    {
        return (sp ==  - 1);
    }

    StackIter *createIterator(){return (new StackIter(this)); }

};

bool StackIter::isDone()
{
    return index == stk->sp+1;
}


int StackIter::currentItem()
{
    return stk->items[index];
}

int funcion(Stack &a, Stack &b)
{

    StackIter *itl = a.createIterator();
    StackIter *itr = b.createIterator();
    for (itl->first(), itr->first(); !itl->isDone(); itl->next(), itr->next())
    if (itl->currentItem() != itr->currentItem())
        break;
    bool ans = itl->isDone() && itr->isDone();
    delete itl;
    delete itr;
    return ans;
}

int main()
{
    Stack *a = new Stack();
    a->push(4);
    a->push(5);
    a->push(6);

    Stack *b = new Stack();
    b->push(4);
    b->push(5);
    b->push(6);

    cout << funcion(*a,*b);


    return 0;
}
*/
