// Ejemplo15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Usando stringstreams

#include <iostream>
#include <string>
#include <sstream>//Header providing string stream classes: Class templates.
using namespace std;

int main()
{
	string cadena;
	float precio = 0;
	int cantidad = 0;

	cout << "Introducir precio: ";
	getline(cin, cadena);//Extracts characters from is and stores them into str until the delimitation character delim is found (or the newline character, '\n', for (2)).
	stringstream(cadena) >> precio;
	cout << "Introducir cantidad: ";
	getline(cin, cadena);
	stringstream(cadena) >> cantidad;
	cout << "Precio total: " << precio * cantidad << endl;
	return 0;
}