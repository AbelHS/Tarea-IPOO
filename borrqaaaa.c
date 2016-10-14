#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int a;
    struct nodo *next;
}nodo;


nodo *lista(int n)
{
    nodo *head;
    head=malloc(sizeof(nodo));
    nodo *prev;
    nodo *cur;
    int i;
    head->a=0;
    prev=head;
    for (i=1;i<=n;i++)
    {
        cur=malloc(sizeof(nodo));
        cur->a=i;
        prev->next=cur;
        prev=cur;
    }
    prev->next=NULL;
    return head;
}


nodo* agregar(int x, nodo* head)
{
    nodo* temp;
    temp=malloc(sizeof(nodo));
    temp->a=x;
    temp->next=head;
    return temp;

}

/*
nodo* agregarF(int x, nodo* head)
{
    nodo *temp=x;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    //head->a = x;
    return temp;
}*/

nodo* eliminar (int val,nodo* head)
{
    nodo* prev=head;
    nodo* cur=head->next;
    if(head->a==val)
    {
            cur=head;
            head=head->next;
            free(cur);
            return head;
    }
    else
    {
        while (cur!=NULL)
        {

            if (cur->a==val)
            {
                prev->next=cur->next;
                free(cur);
                break;
            }
            prev = cur;
            cur=cur->next;

        }
        return head;
    }

}


void print (nodo *head)
{
    nodo* temp;
    temp = head;
    while (temp!=NULL)
    {
        printf( "%d \n" , temp->a);
        temp=temp->next;
    }
}

void conc(nodo* n, nodo* n2)
{
    nodo *temp=n;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n2;
}

int main()
{

    nodo *inicio = lista(4);
    //print(inicio);

    //nodo *otro = lista(2);
    inicio=agregar(10,inicio);
    //print(inicio);


    inicio=eliminar(10,inicio);
    //print(inicio);


    nodo *otro = lista(2);


    conc(inicio, otro);

    print(inicio);

    //head=insertm()
    //concatenar(head,head2);
    //print(head);


    return 0;
}
