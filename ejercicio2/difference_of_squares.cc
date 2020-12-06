/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Andrea Venazco Rodríguez
 * @date 23 Nov 2020
 * 
 * Este programa toma por la línea de comandos un número natural n.
 *
 * Ahora realizara dos operaciones, una es la suma de los cuadrados de los n primos números naturales y otra el cuadrado de la suma de los n números naturales.
 *
 * Después se hace la diferencia entre ambas operaciones.
 *
 * Finalmente, solo se imprimirá la diferencia (de la suma de cuadrados y el cuadrado de la suma) 
 */

#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main (int argc, char* argv[]) {
	int n = stoi(argv[1]);
	float suma, suma2, cuadrado, operacion_cuadrado, diferencia;
	for (int i = 1; i <= n; i++) {
		suma = suma + (i * i);
		suma2 = suma2 + i;
	}
	operacion_cuadrado = pow(suma2, 2);
        diferencia = operacion_cuadrado - suma;
	cout << "La diferencia de la suma de cuadrados y el cuadrado de la suma es: " << diferencia << endl;
	return 0;
}	
