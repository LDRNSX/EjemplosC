// Ejemplo7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Funciones sobrecargadas y plantillas de funciones

#include <iostream>
using namespace std;

template <class T, class U>
bool sonIguales(T a, U b)
{
	return (a == b);
}

template <class T>
T sumar(T a, T b)
{
	T resultado;
	resultado = a + b;
	return resultado;
}

int operar(int a, int b)
{
	return (a * b);
}

double operar(double a, double b)
{
	return (a / b);
}

int main()
{
	int x = 5, y = 2;
	double n = 5.0, m = 2.0;
	cout << operar(x, y) << '\n';
	cout << operar(n, m) << '\n';


	int i = 5, j = 6, k;
	double f = 2.0, g = 0.5, h;
	k = sumar<int>(i, j);
	h = sumar<double>(f, g);
	cout << k << '\n';
	cout << h << '\n';

	if (sonIguales(i, n))
		cout << i << " y " << n << " son iguales\n";
	else
		cout << i << " y " << n << " no son iguales\n";

	return 0;

}


