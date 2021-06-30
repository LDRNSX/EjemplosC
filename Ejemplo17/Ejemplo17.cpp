// Ejemplo17.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Alcance de las variables

#include <iostream>


namespace ne1
{
	int valor() { return 5; }
}

namespace ne2
{
	const double PI = 3.1416;
	double valor() { return 2 * PI; }
}

int g = 13;

int restar(int y) {
	return (y - g);
}

int main()
{
	int y = 20, x = 25;
	{
		int y = 10;
		std::cout << "El valor de la diferencia de " << (y + x) << " con la variable global es " << restar(y+x) << "\n";
	}
	std::cout << "El valor de la variable global es " << g << "\n";
	std::cout << "El valor de la diferencia de " << y << " con la variable global es " << restar(y) << "\n";

	std::cout << ne1::valor() << '\n';
	std::cout << ne2::valor() << '\n';
	std::cout << ne2::PI << '\n';
}
