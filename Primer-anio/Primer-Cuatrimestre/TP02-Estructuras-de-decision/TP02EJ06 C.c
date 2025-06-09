#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int edad1, edad2, altura1, altura2;

    printf ("Algoritmo que, ingresando la edad y la altura de dos personas, imprime la estatura del de mayor edad \n");

    printf ("Ingrese la edad del primer sujeto: \n");
    scanf ("%d", &edad1);

    printf ("Ingrese la altura en centimetros del primer sujeto: \n");
    scanf ("%d", &altura1);

    printf ("Ahora ingrese la edad del segundo sujeto: \n");
    scanf ("%d", &edad2);

    printf ("Ingrese la altura en centimetros del segundo sujeto: \n");
    scanf ("%d", &altura2);

    if (edad1 > edad2){

        printf ("La estatura del primer sujeto es: %d \n", altura1);

    }
         else if(edad2 > edad1) {

            printf ("La estatura del segundo sujeto es: %d \n", altura2);

         }

         else {
            printf ("Los dos sujetos tienen la misma edad \n");
         }


         
         
    system("pause");
    
    return 0;
}
