#include <iostream>
#include "peso.h"

int main()
{
    int cantidadPaquetes = 0;

    double* pesos = crearRegistro(cantidadPaquetes);

    ingresarPesos(pesos, cantidadPaquetes);

    mostrarResultados(pesos, cantidadPaquetes);

    delete[] pesos; // Liberar la memoria asignada

    pesos = nullptr; // Evitar puntero colgante




}

