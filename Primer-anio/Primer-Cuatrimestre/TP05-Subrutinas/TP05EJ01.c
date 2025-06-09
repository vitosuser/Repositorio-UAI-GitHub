#include <stdio.h>
#include <stdlib.h>


int solicitarCalificacion();
int clasificarOpinion(int calificacion);
void actualizarContadores(int categoria, int *positivas, int *neutrales, int *negativas);
void mostrarResultados(int positivas, int neutrales, int negativas);


int main() {

int calificacion, categoria;
int positivas = 0, negativas = 0, neutrales = 0;

printf ("Programa que clasifica opiniones del 1 al 5 \n");


do{

calificacion = solicitarCalificacion();

if (calificacion >= 1 && calificacion <= 5) {

categoria = clasificarOpinion(calificacion); 
actualizarContadores (categoria, &positivas, &neutrales, &negativas);

}

}while (calificacion >= 1 && calificacion <= 5);

mostrarResultados(positivas,neutrales,negativas);

    
    system ("pause");
    return 0;
}

int solicitarCalificacion (){
    
    int califica; // utilizo esta variable para que no se pise con la variable calificacion que esta en el main
    
    printf ("Ingrese una calificacion del 1 al 5, para salir del bucle ingrese algun otro valor \n");
    scanf ("%d", &califica);

    return califica;
}

int clasificarOpinion(int calificacion){

    int clasifica;

    if (calificacion == 5 || calificacion == 4){

         clasifica = 1;

    }
    else if (calificacion == 3){

        clasifica = 2;

    }
    else if (calificacion < 3){

        clasifica = 3;

    }
    else {

        clasifica = 0;

    }

    return clasifica;
}

void actualizarContadores (int categoria,int *positivas,int *neutrales,int *negativas) {

    if (categoria == 1){

        *positivas = *positivas + 1; 

    }

    else if (categoria == 2) {

        *neutrales = *neutrales + 1;

    }

    else {

        *negativas = *negativas + 1;
    }
    
}
void mostrarResultados(int positivas,int neutrales,int negativas){

    printf ("Resultados de la encuesta: \n");
    printf ("Cantidad de opiniones positivas: %d \n", positivas); 
    printf ("Cantidad de opiniones neutrales: %d \n", neutrales);
    printf ("Cantidad de opiniones negativas: %d \n", negativas);

}