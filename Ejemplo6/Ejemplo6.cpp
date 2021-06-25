// Ejemplo6.cpp 
//Funciones en C++

#include <iostream>
using namespace std;

//Funcion con parametros pasados por valor
int suma(int a, int b) {
	int resultado;
	resultado = a + b;
	a *= 2;
	b *= 2;
	return resultado;
}

//Funcion con parametros pasador por referencia
int doblar(int& x, int& y) {
	x *= 2;
	y *= 2;
	return (x + y);
}

//Funcion con parametros constantes pasador por referencia
int duplo(const int& x, const int& y) {
	int a, b;
	a = x * 2;
	b = y * 2;
	return (x + y);
}

int main(){
	int s, i1, i2;
	i1 = 5;
	i2 = 3;

	s = suma(i1, i2);
	cout << "El resultado de sumar "<< i1 << " con " << i2 << " es " << s << endl;

	s = duplo(i1, i2);
	cout << "El resultado de doblar " << i1 << " con " << i2 << " es " << s << endl;

	s = doblar(i1, i2);
	cout << "El resultado de doblar " << i1 << " con " << i2 << " es " << s << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
