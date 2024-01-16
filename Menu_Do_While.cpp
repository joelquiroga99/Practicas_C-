/*
Titulo: Menu con seleccion de opciones con do-while
Autor:Joel Carlos Quiroga Vargas
Descripcion: realizar un menu usando do-while para responder segun el caso correspondiente.
Fecha:2024 - 01 - 15
Version:1.0
*/

/*
DATOS DE INICIO DE PROGRAMA:
MENU
1. OPCION UNO 
2. OPCION DOS 
0. SALIR DEL PROGRAMA
*/

#include <iostream>
#include <unistd.h> // Para la funci�n sleep necesaria para usar la funci�n Esperar
#include <cstdlib>  // Para la funci�n system necesaria para usar la funci�n limpiar pantalla

using namespace std;

int main() {
	int opcion;
	
	do {
		// Limpiar la pantalla
		system("cls");
		
		// Mostrar el men� principal
		cout << "MENU PRINCIPAL" << endl;
		cout << "1. Opcion uno" << endl;
		cout << "2. Opcion dos" << endl;
		cout << "0. Salir del programa." << endl;
		cout << "Escoja una opcion:";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			// Limpiar pantalla y mostrar mensaje para la opci�n uno
			system("cls");
			cout << "Escogiste opcion uno." << endl;
			break;
		case 2:
			// Limpiar pantalla y mostrar mensaje para la opci�n dos
			system("cls");
			cout << "Escogiste opcion dos." << endl;
			break;
		case 0:
			// Limpiar pantalla antes de mostrar el mensaje de despedida
			system("cls");
			cout << "Saliendo del programa." << endl;
			break;
		default:
			// Limpiar pantalla y mostrar mensaje para opci�n no v�lida
			system("cls");
			cout << "Opcion no valida." << endl;
		}
		
		if (opcion != 0) {
			// Esperar 2 segundos antes de continuar (solo si la opci�n no es salir)
			sleep(2);
		}
		
	} while (opcion != 0);
	
	// Devolver 0 para indicar una ejecuci�n exitosa
	return 0;
}
