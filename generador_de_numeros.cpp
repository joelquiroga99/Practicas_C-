/*
Titulo: Generacion de numeros aleatorios. 
Autor:Joel Carlos Quiroga Vargas
Descripcion: Escribir un programa que imprina "N" numeros aleatorios entre 0 - 99, donde "N" sea ingresado por el usuario. 
Fecha:2024 - 01 - 17
Version:1.0
*/

#include <iostream>
#include <cstdlib> // Necesario para la funci�n rand()
#include <ctime>   // Necesario para la funci�n time()

// Utilizamos el espacio de nombres std para evitar la repetici�n de std::
using namespace std;

int main() {
	int cantidad;
	
	// Mensaje para solicitar al usuario que ingrese la cantidad de n�meros a generar
	cout << "Ejercicio 2: Generaci�n de NUmeros Aleatorios\n";
	cout << "�Cu�ntos n�meros quiere generar? ";
	cin >> cantidad;
	
	// Inicializar la semilla para obtener n�meros realmente aleatorios
	srand(time(0));
	
	// Mostrar los n�meros aleatorios generados
	cout << "N�meros aleatorios generados: ";
	for (int i = 0; i < cantidad; ++i) {
		// Generar n�meros aleatorios entre 0 y 99 y mostrarlos
		cout << rand() % 100;
		// Agregar una coma y un espacio entre los n�meros (excepto el �ltimo)
		if (i < cantidad - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	
	return 0;
}
