#include <iostream>
using namespace std;

// Declaración de variable global
int entero_num;

// Declaración de función para determinar si un número es par o impar
bool par_impar()
{
	return entero_num % 2 == 0;
}

// Declaración de función para ingresar un número
void ingresar()
{
	cout << "Ingresar un numero:";
	cin >> entero_num;
}

int main()
{
	ingresar();
	
	// Determinar si el número ingresado es par o impar
	if (par_impar())
	{
		cout << "El numero ingresado es par." << endl;
	}
	else
	{
		cout << "El numero ingresado es impar." << endl;
	}
	
	return 0;
}
