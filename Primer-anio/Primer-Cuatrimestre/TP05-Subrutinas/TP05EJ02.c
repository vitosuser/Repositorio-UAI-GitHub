#include <stdio.h>
#include <stdlib.h>


void solicitarValorPositivo(float *consumo, float *capacidad);
int esConsumoValido(float consumo);
float calcularDuracionBateria(float capacidad, float consumo);
void mostrarResultado(float bateria);

int main() {

    printf ("Programa para calcular la duraciion de la bateria de un dispoistivo \n");

    float bateria = 0, consumo = 0, capacidad;
    int validador = 0;
    char rta;
    

do {

    solicitarValorPositivo(&consumo,&capacidad);
    validador = esConsumoValido(consumo);
    
    if (validador == 1){

        bateria = calcularDuracionBateria(capacidad,consumo);

        mostrarResultado(bateria);

    }
    else {

        printf ("Valores ingresados no validos \n");

    }

    printf ("Desea hacer otro calculo? S / N");
    scanf (" %c", &rta);

}while (rta == 'S') ;

    system ("pause");
    return 0;
}

 void solicitarValorPositivo(float *consumo, float *capacidad) {

    printf ("Ingrese la capacidad de la bateria en mAh: \n");
    scanf ("%f", capacidad);

    printf ("Ingrese el consumo del dispositivo en mAh: \n");
    scanf ("%f", consumo);

 }

 int esConsumoValido(float consumo){
    int valid;

    if (consumo > 0){

        valid = 1;

    }
    else {

        valid = 0;

    }

    return valid;
 }

float calcularDuracionBateria(float capacidad, float consumo) {

    float resultado = 0;

    resultado =  capacidad / consumo;

    return resultado;
}

 void mostrarResultado(float bateria){

    printf ("La duracion de la bateria es de %.2f hora/s \n\n", bateria);
 }