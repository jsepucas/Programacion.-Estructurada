struct Estudiante{
    char nombre[20];
    int edad;
    float promedio;
};

int main(){
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Mario");
    estudiante1.edad = 18;
    estudiante1.promedio = 8.47;

    struct Estudiante* estudiantePtr;
    estudiantePtr = (struct Estudiante*)malloc(sizeof(struct Estudiante));
    if (estudiantePtr == nullptr) {
        fprintf(stderr, "Error al asignar memoria.\n");
        return 1;
    }