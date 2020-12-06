#include<iostream>
#include<math.h>
#define MAX 100000
using namespace std;

bool es_primo(int n) {
	bool primo;
	if ( n != 1 && n!= 0){
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				if (n == i) {
					primo = true;
				} else {
					primo = false;
					return primo;
				}
			}
		}
	} else {
		primo = false;
	}
	return primo;
}

int main (int argc, char* argv[]) {
	int n = stoi(argv[1]);
	int nesimo[MAX], impar; 
	nesimo[0] = 2;
	for ( int i = 1; i <= n; i++) {
		nesimo[i] =  es_primo (nesimo[i-1]);
		if( nesimo[i] % 2 != 0) {
                        impar = impar + 1;
                        cout << "Es impar: " << endl;
                } else {
                        cout << "No es impar: " << endl;
		}
	} cout << "El programa imprime " << nesimo[n-1] << ", puesto que és " << n << " el número en la secuencia de números primos" << endl;
	return 0;
}
