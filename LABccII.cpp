#include <iostream>
#include <stdio.h>

using namespace std;


string dia_[7] = { "DOM", "LUN", "MART", "MIER", "JUEV", "VIER", "SAB" };

string unidades[30]={"","uno ","dos ","tres ","cuatro ","cinco ","seis ","siete ","ocho ","nueve ","diez ",
                        "once ","doce ","trece ","catorce ","quince ","dieciseis ","diecisiete ","dieciocho ","diecinueve ",
                        "veinte ","veintiuno ","veintidos ","veintres ","veinticuatro ","veinticinco ","veintiseis ",
                        "veintisiete ","veintiocho ","veintinueve "};

string decenas[10]={"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "};

string centenas[10]={"","ciento ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "};

string Umil[10] = {"", "mil ", "dos mil ", "tres mil", "cuatro mil ", "cinco mil ", "seis mil ", "siete mil ", "ocho mil ", "nueve mil " };
string Dmil[10] = {"", "Diez mil ", "veinte mil ", "treinta mil ", "cuarenta mil ", "cincuenta mil ", "sesenta mil ", "setenta mil ", "ochenta mil ", "noventa mil " };

string Diimil[35] = {"","","","","","","","","","","diez ",
                        "once ","doce ","trece ","catorce ","quince ","dieciseis ","diecisiete ","dieciocho ","diecinueve ",
                        "veinte ","veintiun ","veintidos ","veintitres ","veinticuatro  ","veinticinco ","veintiseis ",
                        "veintisiete ","veintiocho ","veintinueve ", "treinta ", "treintaiun "};

string Cmil[10] = {"", "Cien mil ", "doscientos mil ", "trescientos mil ", "cuatrocientos mil ", "quinientos mil ", "seiscientos mil ", "setecientos mil ", "ochocientos mil ", "novecientos mil " };



bool bisiesto(int anho)
{
    return (anho%400==0 || (anho%100!=0 && anho%4 ==0) ) ? 1 : 0;
}

int quedia(int dia, int mes, int anho)
{
    int a, y,m,d;
    a = (14-mes)/12;
    y = anho - a;
    m = mes + 12 * a - 2;

    d = (dia + y + y/4 - y/100 + y/400 + (31*m)/12)%7 ;

    return d;
}

void pinta(int dias, int mes, int anho)
{
    int k = quedia(1, mes, anho);
    cout << " DOM LUN MAR MIE JUE VIE SAB" << endl;
    for(int i=0; i<k; i++)
        cout << "    ";
    for(int i=1; i<dias; i++){
        k++;
        printf("%4.d", i );
        if(k%7==0)
        cout << endl;
    }
}

void mostrarmes(int mes, int anho)
{
    switch (mes)
    {
       case 1 : case 3 : case 5 : case 7: case 8 : case 10 : case 12: ///31
            pinta(32, mes, anho);
            break;
        case 4: case 6 : case 9 : case 11: ///30
            pinta(31, mes, anho);
            break;
         case 2:
            if (bisiesto(anho))
                pinta(30, mes, anho);
            else
                pinta(29, mes, anho);

    }
}

void desglosar(float numero)
{
    int docientos=0, cien=0, cincuenta=0, veinte=0, diez =0, cinco = 0, dos = 0, sol = 0;
    double temp=0.0;
    int cc=0, vc=0, dc=0;

    if(numero>200)
        docientos = int(numero)/200;
    if(numero>=100)
        cien = int(numero)%200 /100;
    if(numero>=50)
        cincuenta = int(numero)%100 /50;
    if(numero>=20)
        veinte = int(numero)%50 /20;
    if(numero>=10)
        diez = (int(numero)%50)%20/10 ;
    if(numero>=5)
        cinco = int(numero)%10 /5;
    if(numero>=2)
        dos = int(numero)%5 /2;
    if(numero>=1)
        sol = (int(numero)%5)%2 /1;
    if(numero-int(numero/1))
        temp=(numero-int(numero/1));
    if(temp)
    {
        cc = (numero-int(numero/1))/0.499;
        vc =  (cc)?  (((numero-int(numero/1))- 0.49 ) / 0.199)  : ((numero-int(numero/1))/ 0.199) ;
        temp *= 10;
        dc = temp-5*cc-2*vc;
    }
    cout << docientos << " docientos " << endl
    << cien << " cien " << endl
    << cincuenta << " cincuenta " << endl
    << veinte << " veinte " << endl
    << diez << " diez " << endl
    << cinco <<" cinco " << endl
    << dos  <<" dos "<< endl
    << sol << " sol " << endl
    << cc <<" cincuenta cent " << endl
    << vc <<" veinte cent " << endl
    << dc <<" diez cent " << endl << endl;
}

void centena(int numero)
{
    switch(numero)
    {
    case 0 ... 99:
        if(numero <30)
        cout << unidades[numero];// << endl;  ///borrar endl
        else if(numero%10==0)
            cout << decenas[numero/10];// << endl;
        else

            cout << decenas[numero/10] << " y " << unidades[numero%10];// << endl;
        break;
    case 100:
        //cout << otros[numero/100];// << endl;
        cout << "cien ";// << endl;
        break;
    case 101 ... 999:
        if (numero%100 < 29 )
            cout <<  centenas[numero/100] << unidades[numero%100];// <<endl;
        else if(numero%10==0)
            cout <<  centenas[numero/100] << decenas[numero%100/10];// <<endl;
        else
            cout <<  centenas[numero/100] << decenas[numero%100/10] << "y " << unidades[numero%100%10];// << endl;
        break;
    }
}


void Undmil(int numero)
{
    switch(numero)
    {
        /*
    case 0 ... 999:
        centena(numero);
        break;*/

    case 0 ... 999:
        cout << "mil "; ///quizas de error
        centena(numero);
        break;

    case 1000 ... 9999:
        if(numero%1000==0)
            cout << Umil[numero/1000];// << endl;//"mil xD";
        else{
            cout << Umil[numero/1000];
            centena(numero%1000);
        }
        break;
    }
}

void Dimil(int numero)
{
    switch(numero)
    {
    case 0 ... 999:
        centena(numero);
        break;
    case 1000 ... 9999:
        Undmil(numero);
        break;
    case 10000 ... 99999:
        if(numero%10000==0){
            cout << Dmil[numero/10000];///<< endl; ///aqui Umillon(1010000)
        }
        else if(numero<30000){
            cout << Diimil[numero /1000]<< " mil ";
            centena(numero%1000);
        }
        else
            if( numero%10000>999 && numero%10000<2000 ){///99000  numero%1000==0 ||
                centena((numero/1000)-(numero%10000)/1000);
                cout <<"y un ";
                Undmil(numero%10000);
            }
            else if(numero%10000/1000==0){
                centena((numero/1000)-(numero%10000)/1000);
                Undmil(numero%10000);
            }

            else{
                centena((numero/1000)-(numero%10000)/1000);

                cout <<"y ";
                Undmil(numero%10000);
            }
        break;
    }

}

void Cimil(int numero)
{
    switch(numero)
    {
    case 0 ... 999:
        centena(numero);
        break;
    case 1000 ... 9999:
        Undmil(numero);
        break;
    case 10000 ... 99999:
        Dimil(numero);
        break;
    case 100000 ... 999999:
        if((numero%100000)<999){
            cout << Cmil[numero/100000];
            centena(numero%100000);
            ///cout << endl; ///200000
        }
        /*
        else{
            cout << centenas[numero/100000];/// ciento un mil
            Dimil(numero%100000);
        }
        */
        else{
            if(numero%100000>999 && numero%100000<2000){
            cout << centenas[numero/100000] << "un ";/// ciento un mil Cimil(999000);
            Dimil(numero%100000);
            }
            else{
            cout << centenas[numero/100000];/// ciento once mil
            Dimil(numero%100000);
                }
        }
        break;
    }
}

void Umillon(long long numero)
{
    switch(numero)
    {
    case 0 ... 999999:
        Cimil(numero);
        break;
    case 1000000 ... 1999999:
        cout << "Un millon ";
        Cimil(numero%1000000);
        break;
    case 2000000 ... 999999999:
        centena(numero/1000000);
        cout << "millones ";
        Cimil(numero%1000000);
        break;
    case 1000000000 ... 999999999999:
        Cimil((numero/1000000000)*1000);
        centena((numero/1000000)%1000);
        cout << "millones ";
        Cimil(numero%1000000);
        break;
    }
}

int main()
{
    desglosar(1351.3);

    mostrarmes(2,1900);
    cout << endl << endl;
     Umillon(99900001);
    cout << endl;cout << endl;
    Umillon(10091);
    cout << endl;cout << endl;
    Umillon(199);
    cout << endl;cout << endl;
    Umillon(992999999999);
    cout << endl;cout << endl;
    Umillon(991999900001);
    cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;

    return 0;
}
