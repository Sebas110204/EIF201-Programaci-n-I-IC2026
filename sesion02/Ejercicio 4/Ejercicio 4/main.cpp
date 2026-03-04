#include <iostream>
#include <string>
#include "processName.h"

using namespace std;

int main() {
   
    string nombreIngresado = pedirNombre();

   
    cout << "\n--- Resultados del Procesamiento ---" << endl;
    cout << "El primer nombre extraido de la cadena: " << obtenerPrimerNombre(nombreIngresado) << endl;
    cout << "El primer apellido extraido de la cadena: " << obtenerPrimerApellido(nombreIngresado) << endl;
    cout << "La cantidad total de vocales: " << contarVocales(nombreIngresado) << endl;
    cout << "El nombre completo en mayusculas: " << aMayusculas(nombreIngresado) << endl;
    cout << "La longitud total del nombre: " << obtenerLongitud(nombreIngresado) << " caracteres" << endl;

    return 0;
}