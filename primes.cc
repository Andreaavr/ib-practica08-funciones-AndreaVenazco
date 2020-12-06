/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Andrea Venazco Rodríguez
 * @date 23 Nov 2020
 * 
 * Este programa toma por la línea de comandos un número natural, n e imprime el n-ésimo número primo.
 *
 * Por último, imprimirá el número primo que está en la posición n. 
 */

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
	int nesimo[MAX], i; 
	nesimo[0] = 2;
	for ( i = 1; i <= n; i++) {
		nesimo[i] =  es_primo (nesimo[i-1]);
	} cout << "El programa imprime " << nesimo[n-1] << ", puesto que és " << n << " el número en la secuencia de números primos" << endl;
	return 0;
}

