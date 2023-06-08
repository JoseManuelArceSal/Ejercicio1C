#include <stdio.h>
#include<stdio.h>
struct Empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};
int main() {
    struct Empleado empl;
    printf("Ingrese el nombre del empleado: ");
    fgets(empl.nombre, sizeof(empl.nombre), stdin);
    printf("Ingrese el sexo del empleado (M/F): ");
    scanf("%c", &empl.sexo);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &empl.sueldo);
    printf("\nInformación del empleado:\n");
    printf("Nombre: %s", empl.nombre);
    printf("Sexo: %c\n", empl.sexo);
    printf("Sueldo: %.2f\n", empl.sueldo);

    return 0;
}
