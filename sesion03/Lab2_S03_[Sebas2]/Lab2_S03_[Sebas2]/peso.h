#ifndef PESO_H
#define PESO_H

double* crearRegistro(int& cantidad);

void ingresarPesos(double* pesos, int cantidad);

double calcularPesoTotal(const double* pesos, int cantidad);

int contarSobreLimite(const double* pesos, int cantidad);


const double* buscarMasPesado(const double* pesos, int cantidad);

void mostrarResultados(const double* pesos, int cantidad);





#endif // !PESO_H