/*
Titulo: Detecion de Caracteres usando switch
Autor:Joel Carlos Quiroga Vargas
Descripcion: realiza la solicitud de una letra o caracter y comprueba si es una vocal sin importar si es minuscula o mayuscula.
Fecha:2024 - 01 - 15
Version:1.0
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Declarar una variable para almacenar el carácter ingresado
	char caracter;
	
	// Solicitar al usuario que ingrese un carácter
	cout << "Ingrese una letra:";
	
	// Leer la entrada del usuario y almacenarla en la variable 'caracter'
	cin >> caracter;
	
	// Convertir el carácter ingresado a minúsculas utilizando la función tolower
	caracter = tolower(caracter);
	
	// Utilizar una declaración switch para verificar si el carácter es una vocal
	switch(caracter) {
		// Casos para las vocales en minúsculas
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		// Imprimir si es una vocal
		cout << "Es vocal.";
		break;
		// Caso por defecto si no es una vocal
	default:
		// Imprimir que no es una vocal
		cout << "No es una vocal.";
	};
	
	// Devolver 0 para indicar una ejecución exitosa
	return 0;
}
