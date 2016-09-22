#include <stdio.h>
#include <stdlib.h>

/*** 5.3 ***/
void strcat(char *s, char *t)
{
    while(*s != '\0')
        s++;
    s--;
    while((*s++ = *t++));
}


/*** 5.4 ***/
int strend(char *s, char *t)
{
    int len=0;

    while(*s != '\0')
        s++;
    s--;

    while(*t != '\0')
    {
        t++;
        len +=1;
    }

    t--;
    len--;

    while(len > 0)
    {
        if(*t == *s)
        {
            --s;
            --t;
           --len;
        }
        else
            return 0;
    }
    if (len == 0)
        return 1;
}

/*** 5.5 ***/
void strcpy(char *d, char *f, int n)
{
    while (*d != '\0')
        d++;

    while (n-- >0)
        *d++ = *f++;

    *d = '\0';
}

void strncat(char *s, char *t, char *d, int n)
{
    while(*s)
        *d++ = *s++;

    while(n-- >0)
        *d++ = *t++;

    *d = '\0';
}


void strcat2(char *s, char *d)
{
    while(*s)
        s++;

    while(*d)
        *s++ = *d++;

    *s = '\0';
}


int strncmp(char *s, char *t, int n)
{
    while(n-- >0 && *s++ == *t++)
        if (n==0)
            return 0;

    return -1;
}

/*** 5.6 ***/

int getline(char *pc, int lim)
{
    int c;
    char *p = pc;
    while(--lim>0 && (c = getchar()) != EOF && c != '\n')
        *pc++ = c;

    if(c=='\n')
        *pc++ = c;

    *pc = '\0';

    return pc-p-1;
}


void copy(char *s, char *t)
{
    while(*s++ = *t++);
}


int atoi2(char *s)
{
    int temp;
    for(temp=0; isdigit(*s); s++)
        temp = 10*temp + *s-'0';

    return temp;
}

void itoi2(int n, char *s)
{
    int sign;
    char *t=s;

    if((sign = n) < 0)
        n = -n;

    do
    {
        *s++ = n%10+'0';
    }while ((n /= 10) > 0);

    if(sign < 0)
        *s++ = '-';
    *s='\0';
}


/*** bonus mayuscula - minuscula***/
char mayu(char *s)
{
    if(*s >= 'A' && *s <= 'Z')
        return *s +=32;
    return *s;
}





int main(void)
{
    /*
    char x[100] = "holis74";printf("\n%s", x);
    char z[0];
    copy(z,x);
    char *a;
    char b[100];
    int y ;
    y = getline(b, 100);
    printf("\n%d", y);
    printf("\n%s", b);
    */

    /*
    char x[100] = "1774";
    int y = atoi2(x);
    printf("\n%d", y);
    */

    /*
    char x[100];
    int y = -457;
    itoi2(y, x);
    printf("\n%s", x);
    */


    char x[100] = "PRUEBA";
    char z[100] = "PRUBBB";
    //printf("\n%s", z);
    strcat2(x,z);
    //printf("\n%s", x);
    int a;

    a = strncmp(x,z, 2);
    printf("\n%d", a );
    return 0;
}
