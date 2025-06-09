#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valorHora, tiempoTrabajado, sueldo;

    printf("Algoritmo para calcular el sueldo de un trabajador a partir del tiempo trabajado y el valor de la hora \n");

    printf("Ingrese el valor por hora de trabajo \n");
    scanf("%d", &valorHora);

    printf("Ingrese la cantidad de horas trabajadas \n");
    scanf("%d", &tiempoTrabajado);

    sueldo = valorHora * tiempoTrabajado;

    printf("El sueldo del trabajador es: %d \n", sueldo);

    system ("pause");

    return 0;
}
