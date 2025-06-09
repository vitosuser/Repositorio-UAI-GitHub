#include <stdio.h>
#include <stdlib.h>

int solicitarTiempoUso();
int clasificarUso(int tiempoUso);
void actualizarContadoresUso(int categoria, int *contCorto, int *contMedio, int *contExtenso);
void mostrarResultados(int contCorto, int contMedio, int contExtenso);

int main() {
    int tiempoUso, categoria;
    int contCorto = 0, contMedio = 0, contExtenso = 0;

    printf ("Programa que registra multiples sesiones de uso de un recurso tecnologico segun su tiempo de uso y las clasifica \n");

    do {
        tiempoUso = solicitarTiempoUso();
        
        if (tiempoUso > 0) {

            categoria = clasificarUso(tiempoUso);
            actualizarContadoresUso(categoria, &contCorto, &contMedio, &contExtenso);
        }

    }while (tiempoUso != 0);

    mostrarResultados(contCorto, contMedio, contExtenso);

    system ("pause");
    return 0;
}

int solicitarTiempoUso(){
    int tiempo;

    printf ("Ingrese el tiempo en minutos de uso del dispositivo (cero para salir): \n");
    scanf ("%d", &tiempo);

    return tiempo;
}

int clasificarUso(int tiempoUso) {
    int cat;

    if (tiempoUso > 120) {

        cat = 3;
    }
    else if (tiempoUso > 30 && tiempoUso <= 120) {

        cat = 2;

    }
    else if (tiempoUso <= 30 && tiempoUso > 0) {

        cat = 1;
    }
    else {

        cat = 0;
    }

    return cat;
}


void actualizarContadoresUso(int categoria, int *contCorto, int *contMedio, int *contExtenso) {

    if (categoria == 3) {

        *contExtenso = *contExtenso + 1;

    }
    else if (categoria == 2) {

        *contMedio = *contMedio + 1;

    }
    else if (categoria == 1) {

        *contCorto = *contCorto + 1;

    }
}


void mostrarResultados(int contCorto, int contMedio, int contExtenso) {

    printf ("Cantidad de sesiones cortas (menores o iguales a 30 min): %d \n", contCorto);
    printf ("Cantidad de sesiones de tiempo medio ( + 30 min y menores o iguales a 120 min): %d \n", contMedio);
    printf ("Cantidad de sesiones extensas (mayores a 120 min): %d \n", contExtenso);

}
