#include <stdio.h>
#include <stdlib.h>

int solicitarTipoVisitante();
void registrarVisitantes(int visitante, int *contAdultos, int *contNinos);
int sumarTotales(int contAdultos, int contNinos);
void mostrarResultados(int totalVisitantes, int contAdultos, int contNinos);

int main() {
    printf ("Programa para contar visitantes y clasificarlos segun ninios y adultos \n\n");

    int visitante, totalVisitantes;
    int contAdultos = 0, contNinos = 0;

    do {

        visitante = solicitarTipoVisitante();

        if (visitante > -1){

            registrarVisitantes(visitante, &contAdultos, &contNinos);

        }

    }while (visitante > -1);

    totalVisitantes = sumarTotales(contAdultos, contNinos);

    if (totalVisitantes > 0){

    mostrarResultados(totalVisitantes, contAdultos, contNinos);

    }
    else {

        printf ("No se ingresaron visitantes \n");

    }
    system ("pause");
    return 0;
}

int solicitarTipoVisitante(){
    int tipo;

    printf ("Ingrese si el visitante es adulto (1) o ninio (0) -ingrese -1 para finalizar-: \n");
    scanf ("%d", &tipo);

    return tipo;

}

void registrarVisitantes(int visitante, int *contAdultos, int *contNinos){

    if (visitante == 1){

        *contAdultos = *contAdultos + 1;
    }
    else if (visitante == 0) {

        *contNinos = *contNinos + 1;

    }
}

int sumarTotales(int contAdultos, int contNinos){
    int total = 0;

    total = contAdultos + contNinos;

    return total;
}


void mostrarResultados(int totalVisitantes, int contAdultos, int contNinos){

    printf ("Cantidad de adultos: %d \n", contAdultos);
    printf ("Cantidad de ninios: %d \n", contNinos);
    printf ("Total de visitantes: %d \n", totalVisitantes);

}
