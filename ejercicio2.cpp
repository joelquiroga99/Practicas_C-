#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

// Funciones para realizar las tareas especificas:
// Multiplicacion de dos numeros:
double multiplicacionDosNumeros(double a, double b) {
	system("cls");
	double resultado = a * b;
	cout << "Resultado: " << resultado << endl;
	Sleep(2000);
	return 0;
}

// Division de dos numeros
double divisionDosNumeros(double a, double b) {
	if (b != 0) {
		system("cls");
		double resultado = a / b;
		cout << "Resultado: " << resultado << endl;
		Sleep(2000);
		return 0;
	} else {
		system("cls");
		cout << "Error: No se puede dividir por cero." << endl;
		Sleep(2000);
		return 0;
	}
}

// Multiplicacion de tres numeros:
double multiplicacionTresNumeros(double a, double b, double c) {
	system("cls");
	double resultado = a * b * c;
	cout << "Resultado: " << resultado << endl;
	Sleep(2000);
	return 0;
}

// Hallar el mayor de tres numeros:
double mayorDeTresNumeros(double a, double b, double c) {
	system("cls");
	double resultado;
	if (a >= b && a >= c) {
		resultado = a;
	} else if (b >= a && b >= c) {
		resultado = b;
	} else {
		resultado = c;
	}
	cout << "El mayor es: " << resultado << endl;
	Sleep(2000);
	return 0;
}

int main() {
	char opcion;
	double num1, num2, num3;
	
	do {
		system("cls");
		// Mostrar opciones del menu
		cout << "MENU PRINCIPAL" << endl;
		cout << "ALUMNO: JOEL CARLOS QUIROGA VARGAS" << endl;
		cout << "1. Multiplicacion con 2 numeros" << endl;
		cout << "2. Division con 2 numeros" << endl;
		cout << "3. Multiplicacion con 3 numeros" << endl;
		cout << "4. Mayor de 3 numeros" << endl;
		cout << "S. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		// Realizar acciones segun la opcion seleccionada
		switch (opcion) {
		case '1':
			system("cls");
			cout << "Ingrese dos numeros para multiplicar..." << endl;
			Sleep(2000);
			system("cls");
			cout << "Ingrese primer numero:" << endl;
			cin >> num1;
			cout << "Ingrese segundo numero:" << endl;
			cin >> num2;
			multiplicacionDosNumeros(num1, num2);
			break;
		case '2':
			system("cls");
			cout << "Ingrese dos numeros para dividir..." << endl;
			Sleep(2000);
			system("cls");
			cout << "Ingrese primer numero:" << endl;
			cin >> num1;
			cout << "Ingrese segundo numero:" << endl;
			cin >> num2;
			divisionDosNumeros(num1, num2);
			break;
		case '3':
			system("cls");
			cout << "Ingrese tres numeros para multiplicar..." << endl;
			Sleep(2000);
			system("cls");
			cout << "Ingrese primer numero:" << endl;
			cin >> num1;
			cout << "Ingrese segundo numero:" << endl;
			cin >> num2;
			cout << "Ingrese tercer numero:" << endl;
			cin	>> num3;
			multiplicacionTresNumeros(num1, num2, num3);
			break;
		case '4':
			system("cls");
			cout << "Ingrese tres numeros para encontrar el mayor..." << endl;
			Sleep(2000);
			system("cls");
			cout << "Ingrese primer numero:" << endl;
			cin >> num1;
			cout << "Ingrese segundo numero:" << endl;
			cin >> num2;
			cout << "Ingrese tercer numero:" << endl;
			cin	>> num3;
			mayorDeTresNumeros(num1, num2, num3);
			break;
		case 'S':
		case 's':
			system("cls");
			cout << "Saliendo del programa." << endl;
			break;
		default:
			system("cls");
			cout << "Opcion no valida. Intente de nuevo." << endl;
		}
		
		// Pedir al usuario que presione una tecla para continuar (excepto para la opción de salir)
		if (opcion != 'S' && opcion != 's') {
			cout << "Presione una tecla para continuar...";
			getchar(); // Esperar a que el usuario ingrese una tecla
			getchar(); // Consumir el carácter de nueva línea del ingreso anterior
		}
		
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}

