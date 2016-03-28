#include <stdio.h>


int b,c,z,i;
char a[100];
bool primo(int z);

void e1()
{
    printf("ingresa tu nombre \n");
    scanf("%s", &a);
    for(i=1; i<=10; i++)
        printf("%s\n",a);
}


void e2()
{
    int CE=0,CT=0,CN=0;
    printf("ingrese palabras \n");
    while( ( b = getchar()) != EOF)
    {
        if ( b == ' ')
        {
            CE+=1;
        }
        else if ( b == '\t')
        {
            CT+=1;
        }
        else if ( b == '\n')
         {
            CN+=1;
         }
    }
    printf ("la cantidad de espacios en blanco es %d\n", CE);
    printf ("la cantidad de tabuladores  es %d\n", CT);
    printf ("la cantidad de saltos de linea es %d\n", CN-1);
}



void e3()
{
    int b;
    printf("ingrese numeros \n");

    do
    {
    scanf("%d", &b);
    b*=b;

    printf("el resultado es %d\n", b);
    }while (b != 0);

}






void e4()
{
    int c=0;
    printf("ingresa un numero \n");
    scanf("%d", &b);
    for(i=1; i<=b ; i++)
        c+=i;

    printf("la suma n-numeros es %d ",c);


}



/* ejercicio 5 */
bool esprimo(int a)
{
	int i, b=0;

	if (a==2)
		return true;

	for (i=1; i <= a; i++)
	{
		if (a%i == 0)
			b+=1;
	}
	if (b > 2)
		return false;
	else
		return true;

}




void e6()
{
    int a,x=2,z=1,j=0;
    printf("ingrea la potencia \n");
    scanf("%d", &a);
    printf("ingrea la base \n");
    scanf("%d", &x);
    for (i=1; i<=a ; i++)
        z *= x;

    printf("el resultado es %d a es %d\n", z);

}



void e7()
{
    int a,x,z=1,i;
    printf("ingrea el numero factorial \n");
    scanf("%d", &a);

    x=a;
    for (i=2; i<x ; i++)
        a*=i;


	printf("el resultado es %d ",a);

}

void e8()
{
	int a,b,c,d;
	printf("ingresa un numeros natural\n");
	scanf("%d", &a);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &b);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &c);
	if (a>0 && b>0 && c>0)
	{
		if (a<b && a<c)
		{
			if (b<c)
				printf("%d %d %d", a,b,c);
			else
				printf("%d %d %d", a,c,b);
		}

		else if (b<a && b<c)
		{
			if (a<c)
				printf("%d %d %d", b,a,c);
			else
				printf("%d %d %d", b,c,a);
		}

		else if (c<a && c<b)
		{
			if (a<b)
				printf("%d %d %d", c,a,b);
			else
				printf("%d %d %d", c,b,a);
		}

		else
			printf("%d %d %d", c,b,a);


	}
	else
        printf("ingresaste uno o mas numeros no naturales");

}


int e9()
{
	int a,b,c,d,e;
	int mcd(int a, int b);
	printf("ingresa un numeros natural\n");
	scanf("%d", &a);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &b);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &c);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &d);

	e = mcd(mcd(c,b),a);
    printf("el MCD es %d", e);

}

int d;

int mcd(int a, int b)
	{
	    if ((a%b) == 0)
            return b;
        else
            return mcd(b, a%b);

	}

int main()
{
    printf("introduce el numero de ejercicio\n");
    scanf("%d", &z);
    switch(z)
    {
    case 1: e1();
        break;
    case 2: e2();
        break;
    case 3: e3();
        break;
    case 4: e4();
        break;
    case 5:
    	{
        int a;
    	printf("ingrese un numero\n ");
        scanf("%d", &a);
        for (i=1; i < a; i++)

        {
        if (esprimo(i))
            b+=i;
        }

        printf("la suma es %d", b);

        break;
        }

    case 6: e6();
        break;
    case 7: e7();
        break;
    case 8: e8();
        break;
    case 9:
        {
	int a,b,c,d,e;
	int mcd(int a, int b);
	printf("ingresa un numeros natural\n");
	scanf("%d", &a);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &b);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &c);
	printf("ingresa otro numeros natural\n");
	scanf("%d", &d);

	e = mcd(mcd(c,b),a);
    printf("el MCD es %d", e);
    break;

}


    case 10:
        {

	int a,x;
	float i,H;
	printf("ingrea el numero \n");
	scanf("%d", &a);

	x=a;
	for (i=1; i<=x ; i++)

		H= H+(1/i);



	printf("el resultado es %f", H);



        break;
        }

    return 0;
    }
}
