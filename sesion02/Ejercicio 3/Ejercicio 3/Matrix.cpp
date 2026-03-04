#include "Matrix.h"
#include <iostream>
#include <iomanip>

using namespace std;

void fillMatrix(int matrix[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << "Enter element [" << i << "][" << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}
}

void sumFilas(int matrix[3][3], int sum[3]) {
	for (int i = 0; i < 3; ++i) {
		sum[i] = 0;
		for (int j = 0; j < 3; ++j) {
			sum[i] += matrix[i][j];
		}
	}
}

void sumColumnas(int matrix[3][3], int sum[3]) {
	for (int j = 0; j < 3; ++j) {
		sum[j] = 0;
		for (int i = 0; i < 3; ++i) {
			sum[j] += matrix[i][j];
		}
	}
}

void sumDiagonals(int matrix[3][3], int& sumMain, int& sumSecondary) {
	sumMain = 0;
	sumSecondary = 0;
	for (int i = 0; i < 3; ++i) {
		sumMain += matrix[i][i]; // Main diagonal
		sumSecondary += matrix[i][2 - i]; // Secondary diagonal
	}
}

void printMatrix(int matrix[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			// Usamos setw(5) para que cada número tenga un ancho de 5 caracteres.
			// Puedes cambiar el 5 por un 4 o un 6 dependiendo de qué tan separados los quieras.
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
} 