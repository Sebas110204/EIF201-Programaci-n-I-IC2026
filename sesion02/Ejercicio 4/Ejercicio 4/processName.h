#ifndef PROCESS_NAME_H 
#define PROCESS_NAME_H

#include <string>

std::string pedirNombre();
std::string obtenerPrimerNombre(const std::string& nombreCompleto);
std::string obtenerPrimerApellido(const std::string& nombreCompleto);
int contarVocales(const std::string& nombreCompleto);
std::string aMayusculas(const std::string& nombreCompleto);
int obtenerLongitud(const std::string& nombreCompleto);

#endif 