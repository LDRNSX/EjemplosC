// Ejemplo14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// conditional operator

#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8");
	int a, b, c;
	cout << "Introducir un numero:" << endl;
	cin >> a;
	cout << "Introducir otro numero:" << endl;
	cin >> b;
	c = (a > b) ? a : b;

	cout << "El numero mayor es " << c << '\n';
}