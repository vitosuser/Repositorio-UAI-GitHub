#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3, sumaTotal;

    printf("Algoritmo calcular el perimetro de un triangulo \n");

    printf("Ingrese la longitud del primer lado \n");
    scanf("%d", &lado1);

    printf("Ingrese la longitud del segundo lado \n");
    scanf("%d", &lado2);

    printf("Ingrese la longitud del tercer lado \n");
    scanf("%d", &lado3);


    sumaTotal = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es: %d \n", sumaTotal);

    system ("pause");

    return 0;
}
