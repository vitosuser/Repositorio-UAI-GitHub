#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int nFac, valFac, cantFac, suma, conjunto1, conjunto2;

    printf ("Algoritmo que ingresando datos de facturas, suma sus importes e imprime cuantas superan los $10.000 y cuantas estan en el rango de $4.000 y $7.000 inclusive \n");

    cantFac = 0;
    suma = 0;
    conjunto1 = 0;
    conjunto2 = 0;

    do {

        printf ("Ingrese el numero de factura, para salir del bucle ingrese cero: \n");
        scanf ("%d", &nFac);

        if (nFac > 0) {

            printf ("Ahora ingrese el importe de la factura: \n");
            scanf("%d", &valFac);

            suma = suma + valFac;
            cantFac = cantFac + 1;

        

        if (valFac > 10000){

            conjunto1 = conjunto1 + 1;

        }

        else if (valFac >= 4000 && valFac <= 7000){

            conjunto2 = conjunto2 + 1;

        }
    }
    } while (nFac != 0);

    if (cantFac != 0){

        printf ("La suma total de los montos de las facturas ingresadas es: %d \n", suma);
        printf ("Cantidad de facturas que sus importes superan los $10.000: %d \n", conjunto1);
        printf ("Cantidad de facturas que sus importes estan entre $4.000 y $7.000 inclusive: %d \n", conjunto2);

    }

    else {

        printf ("No se ingreso ninguna factura \n");

    }
    
    system ("pause");

    return 0;
}
