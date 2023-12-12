#include <iostream>
#include <cstring>


struct Estudiante {
    char nombre[20];
    int edad;
    float promedio;
};

Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;

    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Adriana");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    Estudiante copiaEstudiante1 = copiarEstudiante(estudiante1);

    std::cout << "Estudiante 1:" << std::endl;
    std::cout << "Nombre: " << estudiante1.nombre << std::endl;
    std::cout << "Edad: " << estudiante1.edad << std::endl;
    std::cout << "Promedio: " << estudiante1.promedio << std::endl << std::endl;


