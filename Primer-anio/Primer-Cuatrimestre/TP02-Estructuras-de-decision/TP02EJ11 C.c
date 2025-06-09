#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int horTrabj, valHora, suelFinal, cat;

    printf("Algoritmo para calcular el sueldo de un empleado segun su categoria (hasta cat 3) \n");

    printf ("Ingrese las horas trabajadas por el empleado: \n");
    scanf ("%d", &horTrabj);

    printf ("Ahora ingrese la categoria del empleado: \n");
    scanf ("%d", &cat);

    valHora = 0;

    if (cat == 1){

        valHora = 50;
    }
        else if (cat == 2)
         {
            valHora = 70;
        }
             else if (cat == 3) {

                valHora = 80;

             }
                else {

                    printf ("No es una categoria valida \n");
                }



    suelFinal = horTrabj * valHora;

    printf ("El sueldo final del empleado es de: %d pesos \n", suelFinal);

    system ("pause");
    
    return 0;
}
