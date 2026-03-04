#ifndef Estadistica_h
#define Estadistica_h

const int TAM = 10;


void llenarDatos(int arr[], int size);
int  calcularMayor(const int arr[], int size);
int  calcularMenor(const int arr[], int size);
int  calcularSuma(const int arr[], int size);

double calcularPromedio(const int arr[], int size);

void imprimirResultados(const int arr[], int size);




#endif