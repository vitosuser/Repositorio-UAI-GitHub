#include <stdio.h>
#include <stdlib.h>
#define T 5 

void ingresarDatos(int Vector[T]);
void sumaElementos(int Vector[T]);
void productoElementos(int Vector[T]);
void mostrarVectorInvertido(int Vector[T]);
void mostrarParesEImpares(int Vector[T]);


int main() {
	
	int Vector[T];
	
	ingresarDatos(Vector); 
	sumaElementos(Vector);
	productoElementos(Vector);
	mostrarVectorInvertido(Vector);
	mostrarParesEImpares(Vector);
	
	system ("pause");
	
	return 0;
}

void ingresarDatos(int Vector[T]) {
	int i;
	
	for (i = 0; i < T; i++) {
		
	printf ("Ingrese el elemento %d del vector: ", i+1); 
	scanf ("%d", &Vector[i]); 
		
	}
	
}

void sumaElementos(int Vector[T]){
	int i, suma = 0;
	
	printf ("--------Suma-------- \n");
	
	for (i = 0; i < T; i++) {
		
	suma = suma + Vector[i];
		
	}
	
	printf ("La suma de todos los elementos del vector es: %d \n", suma);
	
}

void productoElementos(int Vector[T]) {
	int i, producto = 1; 
	
	printf ("-------Producto-------- \n");
	
	for (i = 0; i < T; i++) {
		
	producto =  producto * Vector [i];
		
	}
	
	printf ("El producto de todos los elementos del vector es: %d \n", producto);
}

void mostrarVectorInvertido(int Vector[T]){
	int i;
	printf ("-----------Vector invertido---------- \n");
	
	for (i = T-1; i >= 0; i --){
	
	
	printf ("%d ", Vector[i]);
	printf (" \n");
	
	}

	
}

void mostrarParesEImpares(int Vector[T]) {
	int i;
	int pares = 0, impares = 0;
	
	printf ("--------Pares e impares--------- \n");
	
	for (i = 0; i < T; i ++){
		
		if (Vector[i] % 2 == 0) {
			
			printf ("El componente %d del vector es par \n", i + 1);
			pares = pares + 1;
			
		}
		else{
			
			printf ("El componente %d del vector es impar \n", i + 1);
			
			impares = impares + 1;
			
		}
		
		
	}
	
	printf ("Cantidad de valores pares: %d \n", pares);
	printf ("Cantidad de valores impares: %d \n", impares);
	
}
