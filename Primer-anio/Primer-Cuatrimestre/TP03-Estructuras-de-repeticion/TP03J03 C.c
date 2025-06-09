#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i, valIn, pares, impares, cantImp, cantPar, sumaTotal, may15;
    float pGeneral, pPares, pImpares;

    printf("Algoritmo que, ingresando 8 valores, saca tanto el promedio general de ellos como tambien el promedio de los valores pares e impares e imprime los valores que superan al numero 15 \n");

    pares = 0;
    impares = 0;
    cantImp = 0;
    cantPar = 0;
    may15 = 0;
    sumaTotal = 0;


    for (i = 1; i <= 8; i+= 1)
    {
        printf("Ingrese un numero: \n");
        scanf ("%d", &valIn);

        sumaTotal = sumaTotal + valIn;

        if (valIn % 2 == 0) {

            pares = pares + valIn;
            cantPar = cantPar + 1;

        }

        else {

            impares = impares + valIn;
            cantImp = cantImp + 1;

        }

        if (valIn > 15){

            may15 = may15 + 1;

        }
    }
    
    pGeneral = (float) sumaTotal / 8;

    pImpares = (float) impares / cantImp;
	
	pPares = (float) pares / cantPar;

    printf ("El promedio general de los numeros ingresados es: %f \n", pGeneral);
    printf ("El promedio de los numeros impares ingresados es: %f \n", pImpares);
    printf ("El promedio de los numeros pares ingresados es: %f \n", pPares);
    printf ("Cantidad de numeros mayores a 15: %d \n", may15);


    system ("pause");

    return 0;
}
