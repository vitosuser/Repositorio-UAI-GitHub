#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int  i, valIn, positivos, negativos, ceros;

    printf ("Algoritmo que a partir de 10 numeros ingresados, indica cuantos son positivos, negativos o ceros \n");
    
    positivos = 0;
    negativos = 0;
    ceros = 0;
    for (i = 1; i <= 10; i+= 1)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &valIn);

        if (valIn > 0){

            positivos = positivos + 1;

        }

        else if (valIn < 0){

            negativos = negativos + 1;

        }

        else {

            ceros = ceros + 1;
        }
    }
    
    printf ("Se han ingresado %d valores positivos \n", positivos);
    printf ("Se han ingresado %d valores negativos \n", negativos);
    printf ("Se han ingresado %d ceros  \n", ceros);

    system ("pause");


    return 0;
}
