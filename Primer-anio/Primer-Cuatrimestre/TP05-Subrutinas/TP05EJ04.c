#include <stdio.h>
#include <stdlib.h>

double solicitarPesoProducto();
int clasificarPeso(double peso);
void actualizarContadoresPeso(int clasificacion, int *contSobrepeso, int *contConforme, int *contBajo);
void mostrarResultados(int contSobrepeso, int contConforme, int contBajo);

int main()
{
    int clasificacion = 0;
    double peso;
    int contSobrepeso = 0, contConforme = 0, contBajo = 0;

    printf ("Programa que realiza un control de calidad basico por peso de producto \n");
    do {

        peso = solicitarPesoProducto();
        clasificacion = clasificarPeso(peso);

        if (clasificacion > 0) {

        actualizarContadoresPeso(clasificacion,&contSobrepeso, &contConforme, &contBajo);

        }


    }while (peso > 0);

    mostrarResultados(contSobrepeso,contConforme,contBajo);

    system ("pause");
    return 0;
}

double solicitarPesoProducto(){
    double weight;

    printf ("Ingrese el peso en gramos del producto(cero para dejar de ingresar valores): \n");
    scanf ("%lf", &weight);

    return weight;
}

int clasificarPeso(double peso){

    int categoriaPeso;
    
    if (peso > 210) {

        categoriaPeso = 1;

    }
    else if (peso >= 190 && peso <= 210) {

        categoriaPeso = 2;

    }
    else if(peso < 190 && peso > 0) { 

        categoriaPeso = 3;

    }
    else {

        categoriaPeso = 0;

    }
    return categoriaPeso;
}

void actualizarContadoresPeso(int clasificacion, int *contSobrepeso, int *contConforme, int *contBajo) {

    if (clasificacion == 1) {

        *contSobrepeso = *contSobrepeso + 1;

    }
    else if (clasificacion == 2) {

        *contConforme = *contConforme + 1;

    }
    else {

        *contBajo = *contBajo + 1;

    }

}

void mostrarResultados(int contSobrepeso, int contConforme, int contBajo) {

    printf ("Cantidad de prodcutos categorizados con Sobrepeso (+210g): %d \n", contSobrepeso);
    printf ("Cantidad de productos categorizados con peso conforme (190g a 210g inclusive): %d \n", contConforme);
    printf ("Cantidad de productos categorizados con peso bajo (menos de 190g): %d \n", contBajo);
    
}

