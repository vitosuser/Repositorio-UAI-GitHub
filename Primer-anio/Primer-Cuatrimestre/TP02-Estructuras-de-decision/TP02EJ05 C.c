#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int valor1, valor2, valor3, valor4, suma1, suma2;

    printf("Algoritmo para comparar dos sumas de dos valores cada una \n");

    printf ("Ingrese el primer valor, este se sumara con el segundo: \n");
    scanf("%d", &valor1);

    printf ("Ingrese el segundo valor, este se sumara con el primer: \n");
    scanf("%d", &valor2);
    
    printf ("Ingrese el tercer valor, este se sumara con el cuarto: \n");
    scanf("%d", &valor3);
    
    printf ("Ingrese el cuarto valor, este se sumara con el tercer: \n");
    scanf("%d", &valor4);

    suma1 = valor1 + valor2;
    suma2 = valor3 + valor4;

    if (suma1 > suma2) {

        printf ("La suma del primer y segundo valor es mayor a la suma del tercer y cuarto valor \n");
        printf("Suma primer y segundo valor: %d \n", suma1);
        printf("Suma tercer y cuarto valor: %d \n", suma2);

    }
        else if (suma2 > suma1) {

        printf ("La suma del tercer y cuarto valor es mayor a la suma del primer y segundo valor \n");
        printf("Suma primer y segundo valor: %d \n", suma1);
        printf("Suma tercer y cuarto valor: %d \n", suma2);

        }
            else {

            printf ("La suma del primer y segundo valor es igual a la suma del tercer y cuarto valor \n");
            printf("Suma primer y segundo valor: %d \n", suma1);
            printf("Suma tercer y cuarto valor: %d \n", suma2);

            }

        system ("pause");
    return 0;
}
