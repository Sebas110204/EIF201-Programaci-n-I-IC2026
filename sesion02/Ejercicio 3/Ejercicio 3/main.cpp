#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    int miMatriz[3][3];
    int sumaF[3];
    int sumaC[3];
    int diagPrin, diagSec;

    cout << "--- Llenar la matriz 3x3 ---" << endl;
    fillMatrix(miMatriz);

    cout << "\n--- Matriz ingresada ---" << endl;
    // Aquí verás la magia de setw() en acción
    printMatrix(miMatriz);

    // Llamamos a las demás funciones para que calculen los datos
    sumFilas(miMatriz, sumaF);
    sumColumnas(miMatriz, sumaC);
    sumDiagonals(miMatriz, diagPrin, diagSec);

    return 0;
}