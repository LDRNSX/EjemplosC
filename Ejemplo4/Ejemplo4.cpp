// Ejemplo4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Operadores de asigncacion y comparacion
/*Asignacion
=	Asignación simple
*=	Asignación y multiplicación
/=	Asignación y división
%=	Asignación y resto
+=	Asignación y suma
-=	Asignación y resta
<<=	Asignación y desplazamiento a la izquierda
>>=	Asignación y desplazamiento a la derecha
&=	Asignación AND bit a bit
^=	Asignación OR exclusivo bit a bit
|=	Asignación OR inclusivo bit a bit

Comparacion
a < b	Menor que	
a > b	Mayor que	
a <= b	Menor o igual que	
a >= b	Mayor que o igual que	
a == b	Igual que	
a != b	Diferente que / No igual que	
a <=> b	Comparación a tres sentidos	
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
	int V = 7;

	//Proceso
	cout << "Introducir un número" << endl;
	cin >> numero1;
	cout << "Introducir otro número" << endl;
	cin >> numero2;
	
	cout << "Operadores de comparación" << endl;
	cout << "El valor de " << numero1 << " es igual al " << numero2 << "? " << (numero1 == numero2) << endl;
	cout << "El valor de " << numero1 << " es distinto a " << numero2 << "? " << (numero1 != numero2) << endl;
	cout << "El valor de " << numero1 << " es >= al " << numero2 << "? " << (numero1 >= numero2) << endl;
	cout << "El valor de " << numero1 << " es > al " << numero2 << "? " << (numero1 > numero2) << endl;
	cout << "El valor de " << numero1 << " es <= al " << numero2 << "? " << (numero1 <= numero2) << endl;
	cout << "El valor de " << numero1 << " es < al " << numero2 << "? " << (numero1 < numero2) << endl;
	
	cout << "Operadores de asignación" << endl;
	cout << "V *=3 " << (V *= 3) << endl;
	cout << "V /=7 " << (V /= 7) << endl;
	cout << "V %=2 " << (V %= 2) << endl;
	cout << "V +=7 " << (V += 7) << endl;
	cout << "V -=5 " << (V -= 5) << endl;
	V = 41;
	cout << "V &=34 " << (V &= 36) << endl;
	V = 41;
	cout << "V ^=34 " << (V ^= 36) << endl;
	V = 41;
	cout << "V |=34 " << (V |= 36) << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
