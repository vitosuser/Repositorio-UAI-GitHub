#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int sumaSueldos, sueldo, cantSueldos;
    float promedio;

    printf("Algoritmo que, ingresando una indeterminada cantidad de sueldos, imprime la suma y el promedio de ellos \n");

    sumaSueldos = 0;
    cantSueldos = 0;

    do {
        do {
                printf("Indique el valor del sueldo, para salir del bucle ingrese cero:  \n");
                scanf("%d", &sueldo);

                if (sueldo < 0){

                    printf ("No se pueden ingresar sueldos negativos ni ceros \n");

                }

        } while (sueldo < 0);

        if (sueldo > 0) {

            sumaSueldos = sumaSueldos + sueldo;
			cantSueldos = cantSueldos + 1;

        }

    }while (sueldo != 0);

    if (cantSueldos > 0){

        promedio = (float) sumaSueldos / cantSueldos;

        printf ("Suma de todos los sueldos ingresados: %d \n", sumaSueldos);
        printf ("Promedio de todos los sueldos ingresados: %f \n", promedio);

    }

    else {

        printf ("No se ingresaron sueldos validos \n");

    }
    return 0;
}
