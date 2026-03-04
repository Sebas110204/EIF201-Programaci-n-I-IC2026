#include "Estadistica.h"
#include <iostream>
#include <limits>

using namespace std;

void llenarDatos(int arr[], int size) {
    cout << "Ingrese los numeros (" << size << "). Por favor, que sean enteros:" << endl;
    for (int i = 0; i < size; i++) {
        while (!(cin >> arr[i])) {
            cout << "Entrada invalida. Intente de nuevo para el elemento " << i << ": ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Numero " << (i + 1) << ": ";
        cin >> arr[i];
    }
}
int  calcularMayor(const int arr[], int size) {
    int mayor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }
    return mayor;
}
int calcularMenor(const int arr[], int size) {
    int menor = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < menor) {
            menor = arr[i];

        }
    }
    return menor;
}
int calcularSuma(const int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    return suma;
}
double calcularPromedio(const int arr[], int size) {
    int suma = calcularSuma(arr, size);
    return static_cast<double>(suma) / size;
}
void imprimirResultados(const int arr[], int size) {
    int mayor = calcularMayor(arr, size);
    int menor = calcularMenor(arr, size);
    int suma = calcularSuma(arr, size);
    double promedio = calcularPromedio(arr, size);
    cout << "Resultados:" << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}