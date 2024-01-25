#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void ingresar(int &numero1, int &numero2)
{
	system("cls");
	cout << "Ingrese un numero: ";
	cin >> numero1;
	cout << "Ingrese otro numero: ";
	cin >> numero2;
}

void sumar(int numero1, int numero2, int &resultado)
{
	resultado = numero1 + numero2;
}

bool es_primo(int numero)
{
	if (numero <= 1)
		return false;
	
	for (int i = 2; i <= sqrt(numero); ++i)
	{
		if (numero % i == 0)
			return false;
		Sleep(2000);
	}
	return true;
}

void mostrar_menu(int &opcion)
{
	system("cls");
	cout << "MENU" << endl;
	cout << "1. Ingresar numeros" << endl;
	cout << "2. Sumar numeros" << endl;
	cout << "3. Verificar si un numero es primo" << endl;
	cout << "0. Salir" << endl;
	cout << "Ingrese su opcion: ";
	cin >> opcion;
}

int main()
{
	int opcion, numero1, numero2, resultado;
	
	do
	{
		mostrar_menu(opcion);
		
		switch (opcion)
		{
		case 1:
			ingresar(numero1, numero2);
			break;
		case 2:
			system("cls");
			sumar(numero1, numero2, resultado);
			cout << "El resultado de la suma es: " << resultado << endl;
			Sleep(2000);
			break;
		case 3:
			system("cls");
			cout << "Ingrese un numero para verificar si es primo: ";
			cin >> numero1;
			if (es_primo(numero1))
			{
				cout << numero1 << " es primo." << endl;
			}
			else
			{
				cout << numero1 << " no es primo." << endl;
			}
			Sleep(2000);
			break;
		case 0:
			system("cls");
			cout << "Saliendo del programa." << endl;
			break;
		default:
			system("cls");
			cout << "Opcion no valida. Intentelo de nuevo." << endl;
			Sleep(2000);
		}
	} while (opcion != 0);
	
	return 0;
}
