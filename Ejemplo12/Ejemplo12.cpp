// Ejemplo12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Los punteros en C++

#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
	int variable = 0;//Crear una variable entera e inicializarla
	int* apuntador = &variable;//Crear un puntero a la posición en memoria de "variable"
	cout << "La dirección de variable es " << apuntador << endl;
	*apuntador = 20;//Le asignamos un valor a esa posición de memoria
	cout << "El valor de variable es " << variable << endl;
	apuntador = NULL;//Después de operar con punteros es necesario liberar la memoria
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 
// 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
