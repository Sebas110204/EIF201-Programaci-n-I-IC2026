#include "arreglo.h"
#include <iostream>
#include <limits>

using namespace std;

void pedirDatos(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Ingrese el valor para la posición " << i << ": ";
		cin >> arr[i];
		// Validar entrada
		while (cin.fail())
		{
			cin.clear(); // Limpiar el estado de error
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar la entrada inválida
			cout << "Entrada inválida. Por favor, ingrese un número entero para la posición " << i << ": ";
			cin >> arr[i];
		}
	}
}

void ordenInverso(const int arr[], int size)
{
	cout << "Los valores en orden inverso son: ";
	for (int i = size - 2; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void mostrarDatos(const int arr[], int size)
{
	cout << "Los valores ingresados son: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void mostrarOrdenInverso(const int arr[], int size)
{
	cout << "Los valores en orden inverso son: ";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


