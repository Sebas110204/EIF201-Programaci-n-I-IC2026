#include "processName.h"


#include <iostream>
#include <cctype> 
using namespace std;

string pedirNombre() {
    string nombre;
    cout << "Ingrese su nombre completo (PrimerNombre PrimerApellido SegundoApellido): ";
    getline(cin, nombre);
    return nombre; 
}

string obtenerPrimerNombre(const string& nombreCompleto) {
    size_t posEspacio = nombreCompleto.find(' ');
    
    if (posEspacio == string::npos) return nombreCompleto;

    return nombreCompleto.substr(0, posEspacio);
}

string obtenerPrimerApellido(const string& nombreCompleto) {
    size_t posEspacio1 = nombreCompleto.find(' ');

    
    if (posEspacio1 == string::npos) return "";

    size_t posEspacio2 = nombreCompleto.find(' ', posEspacio1 + 1);

    
    if (posEspacio2 == string::npos) {
        return nombreCompleto.substr(posEspacio1 + 1);
    }

    return nombreCompleto.substr(posEspacio1 + 1, posEspacio2 - posEspacio1 - 1);
}

int contarVocales(const string& nombreCompleto) {
    int contador = 0;
    for (char letra : nombreCompleto) {
        char letraMin = tolower(letra);
        if (letraMin == 'a' || letraMin == 'e' || letraMin == 'i' || letraMin == 'o' || letraMin == 'u') {
            contador++;
        }
    }
    return contador;
}

string aMayusculas(const string& nombreCompleto) {
    string mayusculas = nombreCompleto;
    for (char& letra : mayusculas) {
        letra = toupper(letra);
    }
    return mayusculas;
}

int obtenerLongitud(const string& nombreCompleto) {
    return nombreCompleto.length();
}