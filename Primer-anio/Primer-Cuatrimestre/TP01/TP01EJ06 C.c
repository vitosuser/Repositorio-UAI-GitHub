#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float base, altura, diagonal, perimetro, superficie;

    printf("Algoritmo para calcular la diagonal, superficie y perimetro de un rectangulo a partir de su base y altura \n");

    printf("Ingrese la longitud en centimetros de la base del rectangulo \n");
    scanf("%f", &base);

    printf("Ingrese la longitud en centimetros de la altura del rectangulo \n");
    scanf("%f", &altura);

    diagonal = sqrt(base * base + altura * altura);

    printf("La longitud de la diagonal principal del rectangulo es: %f centimetros\n", diagonal);

    perimetro = base * 2 + altura * 2;

    printf ("El perimetro del rectangulo es: %f centimetros \n", perimetro);

    superficie = base * altura;

    printf("La superficie del triangulo rectangulo es: %f centimetros cuadrados \n", superficie);

    system("pause");
    
    return 0;
}