/*
Titulo: Tabla de Multiplicar. 
Autor:Joel Carlos Quiroga Vargas
Descripcion: Escribir un programa que imprima la tabla de multiplicar de un numero dado por el usuario. 
Fecha:2024 - 01 - 17
Version:1.0
*/

#include <iostream>

// Utilizamos el espacio de nombres std para evitar la repetición de std::
using namespace std;

int main() {
	int numero;
	
	// Mensaje para solicitar al usuario que ingrese un número
	cout << "Ejercicio 1: Tabla de Multiplicar\n";
	cout << "Ingrese el número para realizar la tabla: ";
	cin >> numero;
	
	// Mostrar la tabla de multiplicar del número ingresado
	cout << "Tabla de multiplicar del " << numero << ":\n";
	for (int i = 1; i <= 10; ++i) {
		// Mostrar cada multiplicación en una línea
		cout << numero << "x" << i << "=" << (numero * i) << "\n";
	}
	
	return 0;
}
