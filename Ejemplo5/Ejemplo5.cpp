// Ejemplo5.cpp : estructura de un programa en C++.
// Control de flujo

#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8");
	//Variables y constantes
	int a, b;
	int contador;
	int s;

	//Sentencias condicionales
	//1) if (condicion) {sentencia1, ... sentenciaN;}
	cout << "Introducir un numero\n";
	cin >> a;
	cout << "Introducir otro numero\n";
	cin >> b;
	if (a > b) { cout << a << " es mayor que " << b << endl; }

	//2) if (condicion) {sentencia1, ... sentenciaN;} else{{sentencia1, ... sentenciaN;}
	//s = (a > b) ? a: b;
	if (a > b) {
		s = a; 
	}
	else {
		s = b;
	}
	cout << "El numero mayor es " << s << '\n';

	s = (a > b) ? a : b;
	cout << "El numero mayor (operador ternario) es " << s << '\n';

	/*3) switch (condicion) {
	case (condicion1): 
		sentencia1;
			...
			sentenciaN;
			break;
			...
		default:
			sentencia;
	}*/
	cout << "Introducir un numero entre 1 y 5" << endl;
	cin >> contador;
	switch (contador) {
	case 1:
		cout << "El numero introducido es uno\n";
		break;
	case 2:
		cout << "El numero introducido es dos\n";
		break;
	case 3:
		cout << "El numero introducido es tres\n";
		break;
	case 4:
		cout << "El numero introducido es cuatro\n";
		break;
	case 5:
		cout << "El numero introducido es cinco\n";
		break;
	default:
		cout << "El numero introducido no esta entre 1 y 5\n";
	}

	//4) for (int contador = vi; contador ? vf; contador ++/--) {sentencia}
	s = 0;
	for (contador = 0; contador < b; contador++) {
		s = s + a;
	}
	cout << a << " * " << b << " sumando " << a << " tantas veces como " << b << " es " << s << endl;

	//5) while (condicion) {sentencia}
	s = 0;
	cout << "Introducir un numero entero positivo(while)\n";
	while (s == 0) {
		cin >> s;
	}

	//6) do {sentencia} while (condicion)
	s = 0;
	cout << "Introducir un numero entero positivo(do-while)\n";
	do{
		cin >> s;
	} while (s == 0);
	return 0;
}