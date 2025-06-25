#include <stdio.h> // directivas del procesador (include y define)
#include <stdlib.h>
#define T 5     // defino una constante en tiempo de compilacion

int main() {
    const int TAM = 5; // defino una consante en tiempo de ejecucion , la diferenmcia entre esta y la de arriba es que esta declara un lugar un valor en la memoria para la cosntante, este se guarda a la memoria y cuando se lo nombre se busca en la memoria y se lo trae al programa, en cambio con define, al compilar el codigo se cambian todos los valores en el codigo que este "T" se va a reemplazar por el valor de T, este no ocupa un espacio en la memoria.
    int i;
    int Vector1[T]; //declarando vectores o arrays de 5 elementos 
    int Vector2[TAM];
    int dato;

    //ingresar datos de un arreglo

    for (i= 0; i < T; i++) {
        do {

            printf ("Ingrese un valor positivo: \n");
            scanf ("%d", &dato);

        }while (dato <= 0);

        Vector1[i] = dato;
        Vector2[i] = 2*dato;
    }

    system ("cls");

    for (i = 0; i < T; i ++){

        printf ("Vector 1: Indice %d - Contenido: %d \n", i, Vector1[i]);
    
    }

    printf ("\n"); // deja un renglon en blanco

    for (i = 0; i < T; i ++){

        printf ("Vector 2: Indice %d - Contenido: %d \n", i, Vector2[i]);
    
    }


    printf ("Fin del programa \n");

    system ("pause");
    return 0;
}

//system ("cls"); sirve para limpiar la pantalla, ejemplo despue de un scanf para que no se acumjlen muchas preguntas