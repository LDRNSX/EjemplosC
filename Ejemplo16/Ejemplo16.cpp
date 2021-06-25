// Ejemplo16.cpp 
//Manejo de funciones : inline
//This informs the compiler that when concatenate is called, the program prefers the function to be expanded inline, instead of performing a regular call


#include <sstream>
#include <string>
#include <locale>
#include <iostream>
using namespace std;

//Funcion concatenar en linea (inline)
inline string concatenar(string& s1, string& s2) {
	return s1 + s2;
}

//Funcion con parametros con valores por defecto
double dividir(double a, double b = 2) {
	return (a / b);
}

//Prototipo de funcion
void maximo(int x, int y);
int producto(int x, int y);

//Funcion recursiva
long factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return 1;
}

int main()
{
	setlocale(LC_ALL, ".UTF8");
	string cadena, cadena1, cadena2;
	int i1, i2;

	cout << "Introducir un texto: ";
	getline(cin, cadena1);

	cout << "Introducir otro texto: ";
	getline(cin, cadena2);

	cout << "Introducir un numero: ";
	getline(cin, cadena);
	stringstream(cadena) >> i1;

	cout << "Introducir otro numero: ";
	getline(cin, cadena);
	stringstream(cadena) >> i2;

	cout << i1 << " dividido por " << i2 << " es " << dividir((double)i1, (double)i2) << endl;
	cout << i1 << " dividido por 2 es " << dividir((double)i1) << endl;

	cadena = concatenar(cadena1, cadena2);
	cout << cadena << endl;

	maximo(i1, i2);
	cout << "El producto de ambos numeros es " << producto(i1, i2) << endl;
	
	cout << "El factorial de " << ((i1 < i2) ? i1 : i2) << " es " << factorial(((i1 < i2) ? i1 : i2)) << endl;
	
	return 0;
}

void maximo(int x, int y) {
	cout << "El numero mayor es " << ((x > y) ? x : y) << endl;
}

int producto(int x, int y) {
	return (x * y);
}
