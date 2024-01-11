#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;

    }
    alumno1 = {100, "Juan Perez", "Quito", "Software", 5.0};
    struct alumno alumno2 = {200, "Ana Paula", "Gye", "Software", 7.1};
    printf("Datos del alumno 1:\n");
    printf("%d", alumno1.matricula);
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Direccion: %s\n", alumno1.direccion);
    printf("Carrera: %s\n", alumno1.carrera);
    printf("Promedio: %.2f\n", alumno1.promedio);
    printf("\n");
    printf("Datos del alumno 2: \n");
    printf("%d", alumno2.matricula);
    printf("Nombre: %s\n", alumno2.nombre);
    printf("Direccion: %s\n", alumno2.direccion);
    printf("Carrera: %s\n", alumno2.carrera);
    printf("Promedio: %.2f\n", alumno2.promedio);
    return 0;
}
