#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int nroAuto, horas, mins, segs, milesimas, mejorTiempo, peorTiempo, ganador, ultimo, tiempoTotal;

    printf("Algoritmo que determina que auto gana en en un carrera a partir de su tiempo \n");

    tiempoTotal = 0;
	ganador = 0;
	ultimo = 0;
	mejorTiempo = 999999999;
	peorTiempo = 0;

    printf ("Ingrese el numero del auto (para salir del bucle ingrese cero): \n");
    scanf ("%d", &nroAuto);

    if (nroAuto != 0){

        do {
            printf ("Ingrese el tiempo del auto en horas: \n");
            scanf("%d", &horas);

            printf ("Ahora ingrese el tiempo del auto en minutos: \n");
            scanf("%d", &mins);

            printf ("Ingrese el tiempo del auto en segundos: \n");
            scanf("%d", &segs);

            printf ("Ingrese el tiempo del auto en milesimas: \n");
            scanf("%d", &milesimas);

            tiempoTotal = (horas * 3600000) + (mins * 60000) + (segs * 1000) + milesimas;

            if (tiempoTotal < mejorTiempo) {

                ganador = nroAuto;
                mejorTiempo = tiempoTotal;

            }

            if (tiempoTotal > peorTiempo){

                ultimo = nroAuto;
                peorTiempo = tiempoTotal;

            }
            
            printf ("Ingrese el numero de otro auto (para salir del bucle ingrese cero): \n");
            scanf ("%d", &nroAuto);
        }while (nroAuto != 0);

    }

    printf ("El ganador es el auto numero: %d \n", ganador);
    printf ("El ultimo es el auto numero: %d \n", ultimo);

    return 0;
}
