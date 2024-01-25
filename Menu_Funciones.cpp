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
        Sleep(2000); // Hace una pausa de 2 segundos (no es necesario para la lógica, podría eliminarse)
    }
    return true; // Si no fue divisible por ningún número, es primo
}

// Función para mostrar el menú y obtener la opción del usuario
void mostrar_menu(int &opcion)
{
    system("cls"); // Limpia la pantalla
    cout << "MENU" << endl;
    cout << "1. Ingresar numeros" << endl;
    cout << "2. Sumar numeros" << endl;
    cout << "3. Verificar si un numero es primo" << endl;
    cout << "0. Salir" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion; // Obtiene la opción del usuario
}

int main()
{
    int opcion, numero1, numero2, resultado;

    do
    {
        mostrar_menu(opcion); // Muestra el menú y obtiene la opción del usuario

        switch (opcion)
        {
        case 1:
            ingresar(numero1, numero2); // Llama a la función para ingresar números
            break;
        case 2:
            system("cls");
            sumar(numero1, numero2, resultado); // Llama a la función para sumar números
            cout << "El resultado de la suma es: " << resultado << endl;
            Sleep(2000);
            break;
        case 3:
            system("cls");
            cout << "Ingrese un numero para verificar si es primo: ";
            cin >> numero1;
            if (es_primo(numero1))
            {
                cout << numero1 << " es primo." << endl; // Llama a la función para verificar si un número es primo
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
    } while (opcion != 0); // Repite el bucle hasta que la opción sea 0

    return 0;
}
