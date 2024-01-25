#include <iostream>
#include <cstdlib>

using namespace std;

int N;

// Funcion para verificar si un numero es impar
bool es_impar(int num) {
	return num%2!=0;
}

// Funcion para generar un numero impar aleatorio
int generar_impar() {
	return rand()%100; // Genera un número aleatorio entre 1 y 99
}

// Funcion para imprimir N numeros impares aleatorios
void imp_impar() {
	int c=0; // Variable para contar la cantidad de numeros impresos
	
	while (c<N) {
		int num=generar_impar();
		if (es_impar(num)) {
			cout <<"Numero aleatorio[" <<c <<"]: " <<num <<endl;
			c++;
		}
	}
}

int main() {
	cout << "Ingrese la cantidad de numeros impares aleatorios a imprimir: ";
	cin >> N;
	
	imp_impar();
	
	return 0;
}
