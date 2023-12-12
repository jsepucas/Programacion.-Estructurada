#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimirEstudiante(Estudiante est) {
    std::cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;
}

void modificarEstudiante(Estudiante* est) {
    est->edad = 30;
}

void imprimirEstudiante2(const Estudiante* est) {
    std::cout << "Nombre: " << est->nombre << ", Edad: " << est->edad << ", Promedio: " << est->promedio << std::endl;
}

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Jose");
    estudiante1.edad = 18;
    estudiante1.promedio = 9;

    imprimirEstudiante(estudiante1);
    modificarEstudiante(&estudiante1);
    imprimirEstudiante2(&estudiante1);
