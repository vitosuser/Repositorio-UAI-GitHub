#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int temp, maxTemp, minTemp;

    printf ("Algoritmo que indica la mayor y menor temperatura ingresada en un horno industrial hasta alcanzar 1000 grados \n");

    printf ("Ingrese un valor de temperatura: \n");
    scanf ("%d", &temp);

    maxTemp = temp;
    minTemp = temp;

    do {

        if (temp > maxTemp){

            maxTemp = temp;

        }

        if (temp < minTemp){

            minTemp = temp;

        }

        printf ("Ingrese un valor de temperatura: \n");
        scanf ("%d", &temp);

    } while (temp != 1000);

    printf ("Temperatura maxima ingresada: %d \n", maxTemp);
    printf ("Temperatura minima ingresada: %d \n", minTemp);

    system ("pause");

    return 0;
}
