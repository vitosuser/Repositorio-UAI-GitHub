#include <stdio.h>
#include <stdlib.h>

//Algoritmo para sumar 2 numeros enteros

int main(int argc, char *argv[]) {
	
	int valor1, valor2, suma;
	
	printf("Suma de 2 numeros \n");
	
	printf("Ingrese un primer valor: \n");
	scanf("%d", &valor1);
	
	printf("Ingrese un segundo valor: \n");
	scanf("%d", &valor2);
	
	suma = valor1 + valor2;
	
	printf("La suma es igual a %d \n", suma);
	
	system("pause");
	
	return 0;
}