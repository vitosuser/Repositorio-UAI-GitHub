#include <stdio.h>
#include <stdlib.h>

/* Problema 9: Evaluador de Progreso en Habilidades de Idioma
En un curso de idiomas, los estudiantes son evaluados por su progreso en diferentes habilidades (ej: comprensión lectora, expresión oral). 
El programa debe solicitar la puntuación obtenida en una habilidad (del 0 al 100). 
Si la puntuación es menor a 60, se considera "Necesita Mejorar". Si es entre 60 y 85, es "Competente". Si es mayor a 85, es "Avanzado". 
El programa debe permitir evaluar varias habilidades para un estudiante hasta que se ingrese un valor específico (ej: -1), y al final, contar cuántas habilidades 
están en cada categoría.
Funciones sugeridas:
•	evaluarHabilidad(int puntuacion): Recibe la puntuación y retorna un código de evaluación (ej: 1 para Necesita Mejorar, 2 para Competente, 3 para Avanzado).
•	actualizarContadoresHabilidad(int evaluacion, int* contMejorar, int* contCompetente, int* contAvanzado): Actualiza los contadores.
•	solicitarPuntuacion(): Solicita la puntuación de una habilidad y la retorna.
*/
int solicitarPuntuacion();
int evaluarHabilidad(int puntuacion);
void actualizarContadores(int evaluacion, int *contMejorar, int *contCompetente, int *contAvanzado);
void mostrarResultados(int contMejorar,int contCompetente,int contAvanzado);

int main() {
    printf ("Programa que evalua a estudiantes en un curso de idioma segun su progreso en difertens habilidad \n");
    int puntuacion, evaluacion;
    int contMejorar = 0, contCompetente = 0, contAvanzado = 0;
    do {
    puntuacion = solicitarPuntuacion();

    if (puntuacion >= 0 && puntuacion <= 100) {

        evaluacion = evaluarHabilidad(puntuacion);
        actualizarContadores (evaluacion,&contMejorar, &contCompetente, &contAvanzado);
    }

    }while (puntuacion > -1);

    mostrarResultados(contMejorar,contCompetente,contAvanzado);

    system ("pause");
    return 0;
}

int solicitarPuntuacion(){
    int puntos;

    printf ("Ingrese la puntuacion (0-100) del estudiantes en una habilidad (-1 para finalizar): \n");
    scanf ("%d", &puntos);

    return puntos;
}

int evaluarHabilidad(int puntuacion){
    int categoria;

    if (puntuacion > 85){

        categoria = 1;

    }
    else if (puntuacion >= 60 && puntuacion <= 85) {

        categoria = 2;

    }
    else if (puntuacion < 60){

        categoria = 3;

    }
    else {

        categoria = 0;

    }

    return categoria;
}

void actualizarContadores(int evaluacion, int *contMejorar, int *contCompetente, int *contAvanzado){

    if (evaluacion == 1){

        *contAvanzado = *contAvanzado + 1;

    }
    else if (evaluacion == 2){

        *contCompetente = *contCompetente + 1;

    }
    else if (evaluacion == 3){

        *contMejorar = *contMejorar + 1;

    }
}

void mostrarResultados(int contMejorar,int contCompetente,int contAvanzado) {

    printf ("Avanzado en %d habilidad/es \n", contAvanzado);
    printf("Competente en %d habilidad/es \n", contCompetente);
    printf ("Necesita mejorar en %d habilidad/es \n", contMejorar);

}