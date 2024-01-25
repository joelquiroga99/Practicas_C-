#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// Función para ingresar dos números desde el usuario
void ingresar(int &numero1, int &numero2)
{
    system("cls"); // Limpia la pantalla
    cout << "Ingrese un numero: ";
    cin >> numero1; // Obtiene el primer número
    cout << "Ingrese otro numero: ";
    cin >> numero2; // Obtiene el segundo número
}

// Función para sumar dos números
void sumar(int numero1, int numero2, int &resultado)
{
    resultado = numero1 + numero2; // Calcula la suma y la almacena en 'resultado'
}

// Función para verificar si un número es primo
bool es_primo(int numero)
{
    if (numero <= 1)
        return false; // Los números menores o iguales a 1 no son primos

    for (int i = 2; i <= sqrt(numero); ++i)
    {
        if (numero % i == 0)
            return false; // Si es divisible por algún número entre 2 y la raíz cuadrada, no es primo
        Sleep(2000); // Hace 
