#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int valorHora, tiemTrabaj, sueldo1, sueldoFinal;

    printf ("Algoritmo para calcular el sueldo de un empleado \n");

    printf ("Ingrese el valor de la hora de trabajo:  \n");
    scanf("%d", &valorHora);

    printf ("Ingrese la cantidad de horas trabajadas por el empleado: \n");
    scanf("%d", &tiemTrabaj);

    sueldo1 = valorHora * tiemTrabaj;

    if (tiemTrabaj > 150) {

        sueldoFinal = sueldo1 + 200;

        printf ("El sueldo del empleado es de %d pesos \n", sueldoFinal);  

    }
        else if (tiemTrabaj > 50) {

            sueldoFinal = sueldo1 + 100;

            printf ("El sueldo del empleado es de %d pesos \n", sueldoFinal) ;
        }

            else {

                printf ("El sueldo del empleado es de %d pesos \n", sueldo1);

            }

    system ("pause");
    
    return 0;
}
