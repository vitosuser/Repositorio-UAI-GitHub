#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i, valIn, conjunto1, conjunto2, conjunto3, conjunto4;
    float porcentaje1, porcentaje2, porcentaje3, porcentaje4;

    printf ("Algoritmo que, al ingresar 30 valores, cuenta cuantos estan entre 1 y 10, cuantos entre 10 y 20, cuantos entre 20 y 30 y cuantos son mas de 30, mostrando el porcentaje de cada grupo \n");

    porcentaje1 = 0;
	porcentaje2 = 0;
	porcentaje3 = 0;
	porcentaje4 = 0;
	conjunto1 = 0;
	conjunto2 = 0;
	conjunto3 = 0;
	conjunto4 = 0;
	
    for (i = 1; i <= 30; i+= 1){

        printf("Ingrese un valor: \n");
        scanf("%d", &valIn);

        if (valIn >= 1 && valIn <= 10){

            conjunto1 = conjunto1 + 1;

        }

        else if (valIn >= 11 && valIn <= 20){

            conjunto2 = conjunto2 + 1;

        }

        else if (valIn >= 21 && valIn <= 30){

            conjunto3 = conjunto3 + 1;

        }

        else {

            conjunto4 = conjunto4 + 1;

        }
    }

    porcentaje1 = ((float) conjunto1 / 30) * 100;
	porcentaje2 = ((float) conjunto2 / 30) * 100;
	porcentaje3 = ((float) conjunto3 / 30) * 100;
	porcentaje4 = ((float) conjunto4 / 30) * 100;

    printf("Porcentaje de valores de 1 a 10: %f por ciento \n", porcentaje1);
    printf("Porcentaje de valores de 11 a 20: %f por ciento \n", porcentaje2);
    printf("Porcentaje de valores de 21 a 30: %f por ciento \n", porcentaje3);
    printf("Porcentaje de valores mayores a 30: %f por ciento \n", porcentaje4);

    system ("pause");

    
    return 0;
}
