#include <iostream>

using namespace std;

int main() {
	// Declaraci�n de variables
	int n1, n2;
	unsigned int nn1, nn2;
	double d1, d2;
	char c1;
	bool b1;
	
	//Asignaciones
	n1 = 2147483645;   //Correcta, dentro del rango de un int.
	nn1 = n1 + 3;      //Correcta, se realiza una operaci�n aritm�tica y se asigna a un unsigned int.
	
	/*
	La siguiente asignaci�n es incorrecta, ya que est� sumando un car�cter y un entero,
	lo cual podr�a no dar el resultado esperado, y adem�s, la conversi�n autom�tica de tipos podr�a no ser deseada.
	Se deber�a considerar una conversi�n expl�cita del car�cter a su valor num�rico antes de la suma.
	d1 = c1 + n1; Comentada para evitar error de compilaci�n.
	
	La siguiente asignaci�n es incorrecta, ya que n1 + 2 excede el rango de un char.
	Se debe considerar la conversi�n de tipo o utilizar una variable de tipo int.
	c1 = n1 + 2;  Comentada para evitar error de compilaci�n.
	
	La siguiente asignaci�n es incorrecta, ya que la variable se llama b1 (min�scula) no B1.
	B1 = -1000;   Comentada para evitar error de compilaci�n.
	
	las siguientes variable tienen una asginacion pero no tienen un uso en el programa:
	n2, nn2, d2 y b1.
	*/
	
	// Imprimir resultados
	cout << "Valor de n1: " << n1 << endl;
	cout << "Valor de nn1: " << nn1 << endl;
	
	return 0;
}
