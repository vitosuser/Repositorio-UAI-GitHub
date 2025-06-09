#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i, valIn, suma;
    float promedio;

    printf ("Algortimo para calcular el promedio de 25 numeros \n");

    suma = 0;

    for ( i = 1; i <= 25; i+= 1){

        printf ("Ingrese un numero: \n");
        scanf("%d", &valIn);

        suma = suma + valIn;
    }

    promedio = suma / 25;

    printf ("El promedio de los 25 numeros ingresados es: %f \n", promedio);

    system ("pause");


    return 0;
}
