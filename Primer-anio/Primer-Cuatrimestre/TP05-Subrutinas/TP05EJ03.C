#include <stdio.h>
#include <stdlib.h>

float solicitarMontoCompra(); // utilizo float para que se puedan ingresar valores decimales
int calcularPuntosCompra(float monto);
void acumularPuntos(int puntosObtenidos, int *puntosTotales);
void mostrarResultados(int puntosTotales);

int main()
{
    printf ("Programa que calcula y acumula los puntos de lealtad de un cliente \n");
    float monto = 0;
    int puntosObtenidos = 0, puntosTotales = 0;
    char rta;

    do {

        monto = solicitarMontoCompra();

        if (monto > 0) {

            puntosObtenidos = calcularPuntosCompra(monto);
            printf ("Puntos obtenidos por la compra: %d \n\n", puntosObtenidos);
            acumularPuntos(puntosObtenidos, &puntosTotales);
        }

        printf ("Desea cargar otra compra? S / N \n");
        scanf (" %c", &rta);

    }while (rta == 'S');

    if (puntosObtenidos > 0){

        mostrarResultados(puntosTotales);
    }

    else {
        printf ("No se ingresaron valores validos \n");
    }

    system ("pause");
    return 0;
}

float solicitarMontoCompra() {

    float monto;

    printf ("Ingrese el monto de la compra: \n");
    scanf ("%f", &monto);

    return monto;
}

int calcularPuntosCompra(float monto) {

    int points;

    if (monto > 25){

        points = 10;
    }

    else if (monto > 10 && monto <= 25) {

        points = 5;

    }
    
    else {

        points = 2;

    }

    return points;
}

void acumularPuntos(int puntosObtenidos,int *puntosTotales){

    *puntosTotales = *puntosTotales + puntosObtenidos;

}


void mostrarResultados(int puntosTotales) {

    printf ("Cantidad de puntos totales acumulados por las compras realizadas: %d \n", puntosTotales);

}
