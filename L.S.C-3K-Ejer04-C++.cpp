// L.S.C-3K-Ejer04-C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<cstdlib>
#include<iostream>
#define maxf 3
#define maxc 5

using namespace std;
int main(int argc, char* argv[])
{
	cout << "Ingrese Valores de la matriz :" << endl;
	float a[maxf][maxc];
	int f, c;
	//escribir el array
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cin >> a[f][c];
		}
	}
	//leer el array
	cout << "\n";
	cout << "Leyendo Valores :" << endl;
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << a[f][c] << " ";

		}
		cout << "\n";
	}
	system("Pause");
	return EXIT_SUCCESS;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
