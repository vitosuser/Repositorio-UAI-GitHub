#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor1, valor2, suma, resta, multiplicacion;

    printf("Algoritmo para calcular la suma, la resta y el producto entre 2 valores \n");
    
    printf("Ingrese un primer valor \n");
    scanf("%d", &valor1);

    printf("Ingrese un segundo valor \n");
    scanf("%d", &valor2);

    suma = valor1 + valor2;
    resta = valor1 - valor2;
    multiplicacion = valor1 * valor2;

    printf("La suma entre el primer valor y el segundo valor da como resultado: %d \n", suma);
    printf("La resta entre el primer valor y el segundo valor da como resultado: %d \n", resta);
    printf("El producto entre el primer valor por el segundo valor da como resultado: %d \n", multiplicacion);

    system("pause");
    return 0;
}
