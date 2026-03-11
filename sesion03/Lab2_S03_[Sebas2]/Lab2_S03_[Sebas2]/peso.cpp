#include "peso.h"
#include <iostream>

double* crearRegistro(int& cantidad) {
	std::cout << "Ingrese la cantidad de pesos a registrar: ";
	std::cin >> cantidad;
	double* pesos = new double[cantidad];
	return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {
	std::cout << "Ingrese los pesos:\n";
	for (int i = 0; i < cantidad; ++i) {
		std::cout << "Peso " << (i + 1) << ": ";
		std::cin >> pesos[i];
	}
}

double calcularPesoTotal(const double* pesos, int cantidad) {
	double total = 0.0;
	for (int i = 0; i < cantidad; ++i) {
		total += pesos[i];
	}
	return total;
}

int contarSobreLimite(const double* pesos, int cantidad) {
	int contador = 0;
	for (int i = 0; i < cantidad; ++i) {
		if (pesos[i] > 100.0) { // Suponiendo que el límite es 100
			contador++;
		}
	}
	return contador;
}

const double* buscarMasPesado(const double* pesos, int cantidad) {
	if (cantidad == 0) return nullptr; // Manejo de caso sin pesos
	const double* masPesado = &pesos[0];
	for (int i = 1; i < cantidad; ++i) {
		if (pesos[i] > *masPesado) {
			masPesado = &pesos[i];
		}
	}
	return masPesado;
}

void mostrarResultados(const double* pesos, int cantidad) {
	double total = calcularPesoTotal(pesos, cantidad);
	int sobreLimite = contarSobreLimite(pesos, cantidad);
	const double* masPesado = buscarMasPesado(pesos, cantidad);
	std::cout << "Peso total: " << total << "\n";
	std::cout << "Cantidad de pesos sobre el límite: " << sobreLimite << "\n";
	if (masPesado) {
		std::cout << "El peso más pesado es: " << *masPesado << "\n";
	} else {
		std::cout << "No se ingresaron pesos.\n";
	}
}

