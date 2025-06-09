#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3;

    printf("Algoritmo para definir el tipo de un triangulo a partir de sus 3 lados \n");

    printf ("Ingrese cuantos centimetros mide el primer lado: \n");
    scanf ("%d", &lado1);

    printf ("Ahora ingrese cuantos centimetros mide el segundo lado: \n");
    scanf ("%d", &lado2);

    printf ("Finalmente ingrese cuantos centimetros mide el primer lado: \n");
    scanf ("%d", &lado3);

    if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {

    printf("El triangulo es escaleno \n");
    }

    else if (lado1 == lado2 && lado2 == lado3)
    {
        printf ("El triangulo es equilatero \n");
    }
        else 
            printf("El triangulo es isoceles \n");
            

    system ("pause");
    
    return 0;
}
