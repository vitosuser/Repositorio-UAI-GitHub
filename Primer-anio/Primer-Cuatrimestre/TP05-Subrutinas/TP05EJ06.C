#include <stdio.h>
#include <stdlib.h>


int solicitarAntiguedad();
int asignarNivelAcceso(int antiguedad);
void actualizarContadoresNivel(int nivel, int *contNivel1, int *contNivel2, int *contNivel3);
void mostrarResultados(int contNivel1, int contNivel2, int contNivel3);

int main() {

    int antiguedad, nivel;
    int contNivel1 = 0, contNivel2 = 0, contNivel3 = 0;

    printf ("Programa que asigna niveles de acceso del 1 al 3 a empleados segun su antiguedad \n");
    do {

        antiguedad = solicitarAntiguedad();
        nivel = asignarNivelAcceso(antiguedad);

        if (nivel > 0) {

            actualizarContadoresNivel(nivel, &contNivel1,&contNivel2, &contNivel3);

        }

    }while (antiguedad > -1);   

    mostrarResultados(contNivel1,contNivel2,contNivel3);

    system ("pause");
    return 0;
}

int solicitarAntiguedad() {
    int aniosAnt;

    printf ("Ingrese la antigueadad del empleado (-1 para salir del bucle): \n");
    scanf("%d", &aniosAnt);

    return aniosAnt;
}

int asignarNivelAcceso(int antiguedad){

    int clasificacion;

    if (antiguedad > 5) {

        clasificacion = 3;
    }

    else if (antiguedad >= 2 && antiguedad <= 5) {

        clasificacion = 2;

    }

    else if (antiguedad < 2 && antiguedad >= 0) {

    clasificacion = 1;

    }

    else {

        clasificacion = 0;

    }

    return clasificacion;
}

void actualizarContadoresNivel(int nivel, int *contNivel1, int *contNivel2, int *contNivel3) {

    if (nivel == 1) {

        *contNivel1 = *contNivel1 + 1;

    }

    else if (nivel == 2){

        *contNivel2 = *contNivel2 + 1;

    }
    else {

        *contNivel3 = *contNivel3 + 1;

    }
}

void mostrarResultados(int contNivel1, int contNivel2, int contNivel3) {

    printf ("Cantidad de empleados en el nivel de acceso 1 (menos de 2 anios): %d \n", contNivel1);
    printf ("Cantidad de empleados en el nivel de acceso 2 (2 a 5 anios inclusive): %d \n", contNivel2);
    printf ("Cantidad de empleados en el nivel de acceso 3 (+ 5 anios): %d \n", contNivel3);

}
