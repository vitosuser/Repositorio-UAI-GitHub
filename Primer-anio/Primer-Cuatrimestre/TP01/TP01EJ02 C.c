#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int valor1, valor2, valor3, suma1, sumaFinal;
	
	printf("Algoritmo para sumar 3 valores que solo puede sumar 2 valores a la vez \n");
	
	printf("Ingrese el primer valor \n");
	scanf("%d", &valor1);
	
	printf("Ingrese el segundo valor \n");
	scanf("%d", &valor2);
	
	suma1 = valor1 + valor2;
	
	printf("La suma de los 2 primeros valores es: %d \n\n", suma1);
	
	printf("Ahora ingrese el tercer valor \n");
	scanf("%d", &valor3);
	
	sumaFinal = suma1 + valor3;
	
	printf("La suma de los 3 valores es: %d \n\n", sumaFinal);
	
	system ("pause");
	
	return 0;
}