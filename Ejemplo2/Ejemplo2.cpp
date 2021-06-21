// Ejemplo2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Tipos de datos de C++
/*
Caracteres: char (también es un entero), wchar_t.
Enteros: short , int , long , long long.
Números en coma flotante: float , double , long double.
Booleanos: bool.
Vacío: void.
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    //Constantes y variables
    char caracter = 'C';
    wchar_t codigoASCII = 'W';
    short enteroPequeno = 123;
    int entero = 12345;
    long enteroLargo = 123456789;
    long long enteroMuyLargo = 123456789012345;
    float flotante = 12.34;
    double doble = 12345.678;
    bool booleano = false;

    //Procedimiento
    cout << "Caracter:" << caracter << endl;
    cout << "ASCII:" << codigoASCII << endl;
    cout << "Entero pequeño:" << enteroPequeno << endl;
    cout << "Entero:" << entero << endl;
    cout << "Entero largo:" << enteroLargo << endl;
    cout << "Entero muy largo:" << enteroMuyLargo << endl;
    cout << "Flotante:" << flotante << endl;
    cout << "Doble:" << doble << endl;
    cout << "Booleano:" << booleano << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
