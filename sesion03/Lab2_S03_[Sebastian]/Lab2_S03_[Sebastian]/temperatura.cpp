#include "temperatura.h"
#include <iostream>
#include <iomanip>

double* crearRegistro(int& cantidadDias) {
	std::cout << "+-----------------------------------------+" << std::endl;
	std::cout << "| Sistema de Registro de Temperaturas |" << std::endl;
	std::cout << "Ingrese la cantidad de días a registrar: ";
	std::cin >> cantidadDias;
	double* registro = new double[cantidadDias];
	return registro;
}
 
void ingresarTemperaturas(double* registro, int cantidad) {
	std::cout << "Ingrese las temperaturas para cada día:\n";
	for (int i = 0; i < cantidad; ++i) {
		std::cout << "Día " << (i + 1) << ": ";
		std::cin >> registro[i];
	}
}

double calcularPromedio(const double* registro, int cantidad) {
	double suma = 0.0;
	for (int i = 0; i < cantidad; ++i) {
		suma += registro[i];
	}
	return cantidad > 0 ? suma / cantidad : 0.0;
}

double calcularMaximo(const double* registro, int cantidad) {
	if (cantidad == 0) return 0.0; // Manejo de caso sin datos
	double maximo = registro[0];
	for (int i = 1; i < cantidad; ++i) {
		if (registro[i] > maximo) {
			maximo = registro[i];
		}
	}
	return maximo;
}

double calcularMinimo(const double* registro, int cantidad) {
	if (cantidad == 0) return 0.0; // Manejo de caso sin datos
	double minimo = registro[0];
	for (int i = 1; i < cantidad; ++i) {
		if (registro[i] < minimo) {
			minimo = registro[i];
		}
	}
	return minimo;
}

void mostrarResultados(const double* registro, int cantidad) {
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Temperaturas registradas:\n";
	for (int i = 0; i < cantidad; ++i) {
		std::cout << "Día " << (i + 1) << ": " << registro[i] << "°C\n";
	}
	std::cout << "Promedio: " << calcularPromedio(registro, cantidad) << "°C\n";
	std::cout << "Máximo: " << calcularMaximo(registro, cantidad) << "°C\n";
	std::cout << "Mínimo: " << calcularMinimo(registro, cantidad) << "°C\n";
}