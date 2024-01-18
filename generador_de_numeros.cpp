/*
Titulo: Generacion de numeros aleatorios. 
Autor:Joel Carlos Quiroga Vargas
Descripcion: Escribir un programa que imprina "N" numeros aleatorios entre 0 - 99, donde "N" sea ingresado por el usuario. 
Fecha:2024 - 01 - 17
Version:1.0
*/

#include <iostream>
#include <cstdlib> // Necesario para la función rand()
#include <ctime>   // Necesario para la función time()

// Utilizamos el espacio de nombres std para evitar la repetición de std::
using namespace std;

int main() {
	int cantidad;
	
	// Mensaje para solicitar al usuario que ingrese la cantidad de números a generar
	cout << "Ejercicio 2: Generación de NUmeros Aleatorios\n";
	cout << "¿Cuántos números quiere generar? ";
	cin >> cantidad;
	
	// Inicializar la semilla para obtener números realmente aleatorios
	srand(time(0));
	
	// Mostrar los números aleatorios generados
	cout << "Números aleatorios generados: ";
	for (int i = 0; i < cantidad; ++i) {
		// Generar números aleatorios entre 0 y 99 y mostrarlos
		cout << rand() % 100;
		// Agregar una coma y un espacio entre los números (excepto el último)
		if (i < cantidad - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	
	return 0;
}
