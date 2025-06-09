#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor1, valor2, valor3, suma;
	
	printf("Algoritmo para sumar 3 valores a la vez\n");
	
	printf("Ingrese el primer valor \n");
	scanf("%d", &valor1);
	
	printf("Ingrese el segundo valor \n");
	scanf("%d", &valor2);
	
	printf("Ingrese el tercer valor \n");
	scanf("%d", &valor3);
	
	suma = valor1 + valor2 + valor3;
	
	printf("La suma de los 3 valores es: %d \n\n", suma);
	
	system("pause");

    return 0;
}
