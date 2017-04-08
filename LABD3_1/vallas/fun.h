#include<iostream>

using namespace std;

int mod(int a, int b) {
	int r, q;
	q = a/b;
	r = a-(b*q);
	if(r<0){return r+b;}
	return r;
}
