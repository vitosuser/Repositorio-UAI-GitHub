#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int valor1, valor2, valor3;
    float promedio;

    printf ("Algoritmo para calcular el promedio de 3 numeros y saber cual de estos 3 valores es mayor al promedio \n");

    printf("Ingrese el primer valor: \n");
    scanf("%d", &valor1);
    
    printf("Ingrese el segundo valor: \n");
    scanf("%d", &valor2);
    
    printf("Ingrese el tercer valor: \n");
    scanf("%d", &valor3);
    
    promedio = (float) (valor1 + valor2 + valor3) / 3;

    printf ("El promedio es: %f \n", promedio);

    if (valor1 > promedio){

        printf ("El primer valor es mayor al promedio de los 3 numeros \n");

    }

    else if (valor2 > promedio) {

        printf("El segundo valor es mayor al promedio de los 3 numeros \n");

    }

    else if (valor3 > promedio) {

        printf("El tercer valor es mayor al promedio de los 3 numeros \n");

    }

    else {

        printf ("Ningun valor es mayor al promedio \n");

    }

    system ("pause");
    
    return 0;
}

