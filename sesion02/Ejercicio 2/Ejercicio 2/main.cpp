#include <iostream>
#include "arreglo.h"

int main()
{
    int datos[TAM];

    pedirDatos(datos, TAM);
    mostrarDatos(datos, TAM);
    mostrarOrdenInverso(datos, TAM);

    return 0;
}
