#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void agregarEstudiante(vector<Estudiante*>& lista);
void mostrarEstudiantes(const vector<Estudiante*>& lista);
void eliminarEstudiante(vector<Estudiante*>& lista);
Estudiante* crearEstudiante(const string& nombre, int edad, float promedio);

int main() {
    vector<Estudiante*> listaEstudiantes;
    int opcion;

    do {

        cout << "1. Agregar Estudiante\n2. Enseñar Estudiantes\n3. Eliminar Estudiante\n4. Salir\n";
        cout << "Introduzca una opcion: ";
        cin >> opcion;

        switch (opcion) {
    }
