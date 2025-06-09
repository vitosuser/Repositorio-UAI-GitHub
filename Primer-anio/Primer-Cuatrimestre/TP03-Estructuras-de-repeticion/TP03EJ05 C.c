#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i, multa, may40K, totalCobrado, sumaMayores;
    float porcentaje40k;

    printf("Algoritmo que ingresando los montos de multas de 50 autos, indica cuantos superan los $40.000 y que porcentaje representan del total de multas cobradas \n");

    may40K = 0;
    totalCobrado = 0;
	sumaMayores = 0;

    for ( i = 1; i <= 50; i+= 1 ){

        printf ("Ingrese el monto de la multa: \n");
        scanf("%d", &multa);

        totalCobrado = totalCobrado + multa;

        if ( multa > 40000){

            may40K = may40K + 1;
            sumaMayores = sumaMayores + multa;

        }
    }

    porcentaje40k = ( (float) sumaMayores / totalCobrado) * 100;

    printf ("La cantidad de multas que speran los $40.000 son: %d \n", may40K);

    printf("Del total cobrado por el pago de las multas, la suma de los que superan los $40.000 representa un %f por ciento del total cobrado", porcentaje40k);

    system ("pause");

    return 0;
}
