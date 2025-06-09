#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int horasTrabajadas, sueldo;

    printf("Algoritmo para calcular el sueldo de un operario a partir de las horas trabajadas, siendo que cada una de ellas tiene un valor de 10 pesos \n");

    printf("Ingrese la cantidad de horas que trabajo el operario \n");
    scanf("%d", &horasTrabajadas);

    sueldo = horasTrabajadas * 10;

    printf("El sueldo del operario es %d pesos \n", sueldo);

    system ("pause");
    return 0;
}
