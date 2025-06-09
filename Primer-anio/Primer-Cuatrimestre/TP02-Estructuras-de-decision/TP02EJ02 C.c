#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int valor1;

    printf("Algoritmo para saber si un numero es positivo, negativo o cero \n");

    printf ("Ingrese el numero: \n");
    scanf("%d", &valor1);

    if (valor1 > 0){

    printf ("El numero ingresado es positivo \n");
    }
    else if (valor1 < 0) {

        printf ("El numero ingresado es negativo \n");
    }
        else {

            printf ("El numero ingresado es cero \n");
}
    
    system ("pause");

    return 0;
}
