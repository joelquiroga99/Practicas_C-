#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p; //Tiene un tamaño de 16 bits y un rango entre -32.768 y 32.767.
	unsigned int numero_entero_u; //Tiene un tamaño de 32 bits y un rango entre 0 y 4.294.967.295.
	int numero_entero;  //tiene un tamaño de 32 bits y un rango entre -2.147.483.648 y 2.147.483.647.
	float numero_decimal; //Tiene un rango entre 1,17549*(e^-38) hasta 3,40282*(e^+38).
	double numero_decimal_g; //Tiene un rango entre 2,22507*(e^-308) hasta 1,79769*(e^308).
	//asignacion de valores limite de los datos
	numero_entero_p=32767;	//Probando el rango maximo 32.768.
	cout <<"Numero entero pequeño:"<<numero_entero_p<<endl;
	numero_entero_p=-32767;	//Probando el rango minimo -32.769.
	cout <<"Numero entero pequeño:"<<numero_entero_p<<endl;
	
	//asignacion de valor minimo en unsigned short int:
	numero_entero_u=4294967295; //Probando el rango negativo en una variable sin negativos.
	cout <<"Numero entero sin signo:"<<numero_entero_u<<endl; 
	
	//asignacion de valor minimo y maximo en int:
	numero_entero=-2147483648; //Probando el valor minimo de un valor entero int
	cout <<"Numero entero minimo:"<<numero_entero<<endl;
	numero_entero=2147483647; //Probando el valor maximo de un valor entero int
	cout <<"Numero entero maximo:"<<numero_entero<<endl;
	
	//asignacion del valor minimo y maximo en float:
	numero_decimal=340282000000000000000000000000000000000; //Probando el valor maximo de un valor decimal float
	cout <<"Numero decimal:"<<numero_decimal<<endl;
	numero_decimal=0.0000000000000000000000000000000000000117549; //Probando el valor minimo de un valor decimal float
	cout <<"Numero decimal:"<<numero_decimal<<endl;
	
	//Probando el valor minimo de un valor decimal double
	numero_decimal_g=0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000222507;
	cout<<"Numero decimal grande:"<<numero_decimal_g<<endl;
	
	//Probando el valor maximo de un valor decimal double
	numero_decimal_g=179769000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
	cout<<"Numero decimal grande:"<<numero_decimal_g<<endl;

	return 0;
} 
