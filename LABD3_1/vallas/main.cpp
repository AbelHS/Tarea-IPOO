#include <iostream>
#include <cstring>
#include "vallas.h"

using namespace std;

int main() {
	int clave;
	string M;
	int op;
	Vallas E(clave);
	Vallas R(clave);
	cout<<"Mensaje: "<<endl;
	getline(cin,M);
	cout<<"Clave: "<<endl;
	cin>>clave;
	cout<<"1.Cifrar 2.Descifrar "<<endl;
	cin>>op;
	if(op==1) {
		string C = E.Cifrar(M,clave);
		cout<<"Mensaje Cifrado: ("<< C <<")"<<endl;
	}
	else if(op==2) {
		string D = R.Descifrar(M,clave);
		cout<<"Mensaje Descifrado: ("<< D <<")"<<endl;
	}
	else {
		cout<<"Ingrese opcion correcta "<<endl;
	}
}

