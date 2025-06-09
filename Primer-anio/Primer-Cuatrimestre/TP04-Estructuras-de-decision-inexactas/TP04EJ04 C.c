#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int nroFac, art, cantV, pUnit, precioTotal;

    printf ("Algoritmo que registra los datos de facturacion de una empresa \n");

    precioTotal= 0;

    do {

            printf ("Ingrese el numero de la factura (cero para finalizar): \n");
            scanf ("%d", &nroFac);

            if (nroFac > 0){

            printf ("Ingese el codigo del articulo: \n");
            scanf ("%d", &art);

            printf ("Ahora ingrese la cantidad vendida: \n");
            scanf("%d", &cantV);

            printf ("Por ultimo, ingrese el precio unitario del articulo: \n");
            scanf ("%d", &pUnit);


            precioTotal = pUnit * cantV;

            printf("Se registraron los datos \n");
            printf ("El monto total de la factura es: %d \n", precioTotal);

            }

            else {

                printf ("No se ingreso un numero de factura valido, fin del registro de facturas \n");

            }

    }while (nroFac = 0);
    
    
    return 0;
}
