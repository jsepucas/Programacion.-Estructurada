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



