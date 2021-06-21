// Ejemplo1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Mostrar un mensaje por pantalla y capturar por teclado un dato

//iostream es un componente de la biblioteca estándar del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida. Su nombre es un acrónimo de Input/Output Stream.
#include <iostream>

//Define la configuración específica de la ubicación, como los formatos de fecha y los símbolos
#include <locale.h>

//using namespace std, es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8"); //Activar la página UTF-8 para mostrar los datos

    //Constantes y variables
    int variable;

    //Procedimiento
    cout << "Dame un número\n";// "\n" = salto de linea ('endl')
    cout << "Esto es un texto(á, é, í, ó, ú, ñ)" << endl;
    cin >> variable;
    cout << "El número introducido es " << variable << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 
//   1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
