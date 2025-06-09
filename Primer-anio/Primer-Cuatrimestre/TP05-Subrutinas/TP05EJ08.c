#include <stdio.h>
#include <stdlib.h>
/*Problema 8: Calculadora de Descuentos por Volumen de Compra
Una tienda ofrece descuentos por volumen en sus productos. El programa debe solicitar el precio unitario del producto y la cantidad comprada. 
Si la cantidad es menor a 5 unidades, no hay descuento. Si es entre 5 y 10 unidades (inclusive), se aplica un 5% de descuento. 
Si es más de 10 unidades, se aplica un 10% de descuento. 
El programa debe calcular el precio final con el descuento aplicado y permitir calcular esto para múltiples compras hasta que el usuario decida terminar.
Funciones sugeridas:
•	calcularPorcentajeDescuento(int cantidad): Retorna el porcentaje de descuento según la cantidad.
•	calcularPrecioFinal(double precioUnitario, int cantidad, double porcentajeDescuento): Calcula y retorna el precio final.
•	solicitarDouble(char* mensaje): Solicita un valor double con un mensaje dado y lo retorna.
*/
void solicitarDatos(double *precioUnitario, int *cantidad);
int calcularPorcentajeDescuento(int cantidad);
double calcularPrecioFinal(int descuento, double precioUnitario, int cantidad);
void mostrarResultados(double precio);

int main() {

    printf ("Programa que calcula descuentos por volumen de compra \n\n");

    int cantidad, descuento;
    double precioUnitario, precio;
    char rta;

     do {
        solicitarDatos(&precioUnitario, &cantidad);

        if (cantidad > 0 && precioUnitario > 0){

            descuento = calcularPorcentajeDescuento(cantidad);
            precio = calcularPrecioFinal(descuento, precioUnitario, cantidad);
            mostrarResultados(precio);

        }
        else if (cantidad <= 0){

            printf ("No se ingresaron valores validos \n\n");

        }

        printf ("Desea ingresar otra compra? S / N \n");
        scanf(" %c", &rta);

     }while (rta == 'S');


    system ("pause");
    return 0;
}

void solicitarDatos(double *precioUnitario, int *cantidad){
    printf ("Ingrese el precio unitario del producto: \n");
    scanf ("%lf", precioUnitario);

    printf ("Ahora ingrese la cantidad comprada: \n");
    scanf ("%d", cantidad);

}

int calcularPorcentajeDescuento(int cantidad){
    int porcentaje;

    if (cantidad > 10){

        porcentaje = 10;

    }

    else if (cantidad >= 5 && cantidad <= 10) {

        porcentaje = 5;
    }

    else if (cantidad < 5) { 

        porcentaje = 0;
    }

    return porcentaje;
}

double calcularPrecioFinal(int descuento, double precioUnitario, int cantidad) {

    double precioFinal, subtotal;

    subtotal = precioUnitario * cantidad;
    
    if (descuento > 0){

        precioFinal = subtotal - ((subtotal * descuento) / 100);

    }

    else {

        precioFinal = subtotal;

    }

    return precioFinal;
}

void mostrarResultados(double precio) {

    printf ("Precio final: %lf \n\n", precio);

}
