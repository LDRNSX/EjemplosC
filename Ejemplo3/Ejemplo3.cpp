// Ejemplo3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Operadores aritmeticos de C++
/*
Operador    =    Asignación
Operador    *    Multiplicación
Operador    /    División
Operador    %    Resto de división entera (mod)
Operador    +    Suma
Operador    -    Resta
Operador    ++   Incremento
Operador    --   Decremento
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    //Constantes y variables
    int numero1;
    int numero2;

    //Proceso
    cout << "Introducir un número" << endl;
    cin >> numero1;
    cout << "Introducir otro número" << endl;
    cin >> numero2;
    cout << "La suma de " << numero1 << " y " << numero2 << " es " << (numero1 + numero2) << endl;
    cout << "La resta de " << numero1 << " y " << numero2 << " es " << (numero1 - numero2) << endl;
    cout << "La multiplicación de " << numero1 << " y " << numero2 << " es " << (numero1 * numero2) << endl;
    cout << "La división de " << numero1 << " y " << numero2 << " es " << (numero1 / numero2) << endl;
    cout << "El resto de " << numero1 << " y " << numero2 << " es " << (numero1 % numero2) << endl;
    cout << "El postincremento de " << numero1++ << " es " << numero1 << endl;
    cout << "El predecremento de " << numero1 << " es " << --numero1 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
