#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

typedef struct Estudiante EstudianteAlias;

EstudianteAlias obtenerCopiaYMostrarAlias(const Estudiante& estudiante) {

    std::cout << "Estudiante Inicial:" << std::endl;
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
