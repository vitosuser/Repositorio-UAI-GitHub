#include <stdio.h>
#include <stdlib.h>
/*Problema 5: Calculadora de Gastos de Viaje Educativo
Un grupo de estudiantes planea un viaje educativo y necesita calcular los gastos. 
El programa debe solicitar el costo de diferentes ítems (transporte, alojamiento, comida, entradas a museos, etc.) uno por uno. El programa debe ir sumando estos gastos. 
El proceso de entrada de gastos termina cuando se ingresa un valor específico (ej: -1). Al final, debe mostrar el total de gastos acumulados.
Funciones sugeridas:
•	sumarGastos(double totalActual, double nuevoGasto): Suma el nuevo gasto al total y retorna el nuevo total.
•	solicitarGasto(): Solicita un monto de gasto al usuario y lo retorna.
*/
double solicitarGasto();
double sumarGastos(double nuevoGasto, double totalActual);
void mostrarResultados(double gastosAcumulados);

int main() {

    double nuevoGasto = 0, gastosAcumulados = 0;

    printf ("Programa que calcula los gastos de un viaje educativo \n");
    do {

    nuevoGasto = solicitarGasto();
    
    if (nuevoGasto > -1) {

    gastosAcumulados = sumarGastos(nuevoGasto, gastosAcumulados);

    }

    } while (nuevoGasto > -1);

    mostrarResultados(gastosAcumulados);
    

	system ("pause");
	return 0;
}

double solicitarGasto() {

    double gasto;

    printf ("Ingrese un gasto ( -1 para salir del bucle): \n");
    scanf ("%lf", &gasto);

    return gasto;
}

double sumarGastos(double nuevoGasto, double totalActual) {


    totalActual = totalActual + nuevoGasto;

    return totalActual;
}

void mostrarResultados(double totalActual) {

    printf("Costo total del viaje: %lf \n", totalActual);

}
