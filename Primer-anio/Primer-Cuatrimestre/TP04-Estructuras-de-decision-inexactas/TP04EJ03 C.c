#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int N, cantVal, valIn, positivos, negativos, cantC, cantN, cantP;
    float nPromedio, pPromedio;

    printf ("Algoritmo que al ingresar determinada cantidad de numeros, imprime el promedio de los positivos, de los negativos y la cantidad de ceros \n");

    positivos = 0;
	negativos = 0;
	cantC = 0;
	cantP = 0;
	cantN = 0;
	N = 0;
	nPromedio = 0;
	pPromedio = 0;
	cantVal = 0;

    printf ("Cuantos valores desea ingresar? \n");
    scanf ("%d", &N);

    if (N != 0){

        while (cantVal < N){

            printf ("Ingrese un valor: \n");
            scanf ("%d", &valIn);

            if (valIn > 0){

                positivos = positivos + valIn;
                cantP = cantP + 1;

            }

            else if (valIn < 0){

                negativos = negativos + valIn;
                cantN = cantN + 1;

            }

            else {

                cantC = cantC + 1;

            }

            cantVal = cantVal + 1;

        }

        if (cantP > 0){

            pPromedio = (float) positivos / cantP;

        }

        if (cantN > 0){

            nPromedio = (float) negativos / cantN;

        }

    printf ("Promedio positivos: %f \n", pPromedio);
    printf ("Promedio negativos: %f \n", nPromedio);
    printf ("Cantidad de ceros ingresados: %d \n", cantC);

    }

    else {

        printf ("No se ingreso ningun valor \n");

    }

    system ("pause");

    return 0;
}
