#include <iostream>
#include <cstring>
#include "fun.h"

using namespace std;

class Vallas {
	private:
		int clave;
	public:
		string alfabeto;
		int len;

		Vallas(int clave1) {
			clave1 = clave;
			alfabeto = "abcdefghijklmnopqrstuvwxyz ";
			len = alfabeto.size();
		}

		string AddX(string mensaje, int clave1) {
			int n = (clave1-1)*2;
			while(mod(mensaje.size(),n) != clave1) {
					mensaje += "x";
			}
			return mensaje;
		}

		string Cifrar(string mensaje, int clave1) {
			mensaje = AddX(mensaje,clave1);
			string msn = "";
			int m = mensaje.size();
			int salto = 2*(clave1)-2;
			int pos = 0;
			int v = 0;
			for(int i=0; i<clave1; i++){
				pos = i;
				v = (2*i);
				while(pos<m){
					msn+=mensaje[pos];
					v = salto-v;
					if(v==0)v=salto-v;
					pos+=v;
					cout << pos << endl;
				}
			}
			return msn;
		}

		string Descifrar(string mensaje, int clave1) {
			string msn = "";
			int m = mensaje.size();
			for(int i=0; i<m; i++)msn+="-";
			int mpos = 0;
			int salto = (2*clave1)-2;
			int v = 0;
			int r = 0;
			int pos = 0;
			int npos = 0;
			while(mpos<m and pos<m){
				npos=pos;
				while(npos<m and pos<m){
					msn[npos]=mensaje[mpos];
					v=salto-v;
					if(v==0)v=salto-v;
					npos+=v;
					mpos++;
					cout << npos << " - " <<mpos<<endl;
				}
				r+=2;
				v=r;
				pos++;
			}
			return msn;
		}

};

