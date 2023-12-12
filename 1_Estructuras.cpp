#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Estudiante{
    char nombre[30];
    int edad;
    float promedio;
};

int main(){
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 18;
    estudiante1.promedio = 5.34;

    struct Estudiante* estudiantePtr;
    estudiantePtr = (struct Estudiante*)malloc(sizeof(struct Estudiante));
    if (estudiantePtr == nullptr) {
        fprintf(stderr, "Error al asignar memoria.\n");
        return 1;
    }

    strcpy(estudiantePtr->nombre, "Mario");
    estudiantePtr->edad = 18;
    estudiantePtr->promedio = 7.89;

    printf("Estudiante 1:\n");
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n\n", estudiante1.promedio);

    printf("Estudiante 2:\n");
    printf("Nombre: %s\n", estudiantePtr->nombre);
    printf("Edad: %d\n", estudiantePtr->edad);
    printf("Promedio: %.2f\n\n", estudiantePtr->promedio);

    free(estudiantePtr);


}