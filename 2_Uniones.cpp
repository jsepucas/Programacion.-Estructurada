#include<stdio.h>
#include<string.h>

union Datos{
    int Entero;
    float Flotante;
    char Caracter[30];
};

int main(){
    union Datos uni;

    uni.Entero = 99;
    printf("Entero: %d\n", uni.Entero);

    uni.Flotante = 3.1416;
    printf("Flotante: %.2f\n", uni.Flotante);

    strcpy(uni.Caracter, "Hasta luego");
    printf("Caracter: %s\n", uni.Caracter);

    return 0;
}