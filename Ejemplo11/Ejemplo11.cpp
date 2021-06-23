// Ejemplo11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Ejemplo de la función setlocale

#include <iostream>     /*iostream es un componente de la biblioteca estándar del lenguaje de programación C++ que es 
                        utilizado para operaciones de entrada/salida. Su nombre es un acrónimo de Input/Output Stream.*/
/*Locales contain information on how to interpretand perform certain input / output and transformation operations
taking into consideration location and language specific settings.*/
//setlocale example
#include <stdio.h>      /* printf stdio.h, que significa "standard input-output header", es el archivo de cabecera 
                        que contiene las definiciones de las macros, las constantes, las declaraciones de funciones
                        de la biblioteca estándar*/
#include <time.h>       /* time_t, struct tm, time, localtime, strftime time.h relacionado con formato de hora
                        y fecha es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C*/
#include <locale.h>     /* struct lconv, setlocale, localeconv In <ctime> (<time.h>), the function strftime is 
                        affected by the time formatting settings.*/

int main()
{
    setlocale(LC_ALL, ".UTF8");
    printf("á,é\n");
    time_t tiempoactual;//Alias of a fundamental arithmetic type capable of representing times, as those returned by function time.
    struct tm* timeinfo;//struct tm. Time structure. Structure containing a calendar date and time broken down into its components.
    char buffer[80];//Vector de 80 elementos de tipo caracter
    struct lconv* lc;/*Formatting info for numeric values. This structure holds formatting information on how numeric values, 
                     both monetaryand non - monetary, are to be written.*/
    time(&tiempoactual);//Get current time. Get the current calendar time as a value of type time_t.
    timeinfo = localtime(&tiempoactual);
    int contador = 0;

    do {
        //Especificadores de formato: son ciertos caracteres precedidos del carácter tanto por ciento '%'.
        printf("Locale is: %s\n", setlocale(LC_ALL, NULL));//%s char [n] (cadena de caracteres)

        strftime(buffer, 80, "%c", timeinfo);//$c char (caracter)
        printf("Date is: %s\n", buffer);

        lc = localeconv();//Retrieves the values provided in the current locale object to format parameters for quantities. 
        printf("Currency symbol is: %s\n-\n", lc->currency_symbol);//the symbol used for currency in the current C locale

        setlocale(LC_ALL, "");
    } while (!contador++);

    return 0;
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
