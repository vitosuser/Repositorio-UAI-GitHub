#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int valor1, valor2;

    printf ("Algoritmo para saber si dos numeros son iguales \n");

    printf ("Ingrese el primer valor: \n");
    scanf("%d", &valor1);

    printf ("Ahora ingrese el segundo valor: \n");
    scanf("%d", &valor2);


    if (valor1 == valor2) 
    {
        printf ("Los valores ingresados son iguales \n");
    }
        else {

        printf ("Los valores ingresados no son iguales \n");
      }

      system ("pause");
      
    return 0;
}
