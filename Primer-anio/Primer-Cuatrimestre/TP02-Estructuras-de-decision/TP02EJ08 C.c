#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int dia, mes, anio, bisiesto, diaLimit;

    printf ("Algoritmo para saber si una fecha es valida o no, teniendo en cuenta años bisiestos \n");

    printf ("Ingrese el dia: \n");
    scanf("%d", &dia);

    printf ("Ingrese el mes: \n");
    scanf("%d", &mes);

    printf ("Ingrese el anio: \n");
    scanf("%d", &anio);

    if ( ((anio / 4) * 4 == anio &&(anio / 100) * 100 != anio)  || ((anio / 400) * 400 == anio) ) {

    bisiesto = 1;

    }
   
    if ((mes == 1) || (mes ==  3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12) ) {

        diaLimit = 31;

    }

    else if ( (mes == 4) || (mes == 6) || (mes == 9) || (mes == 11) ){

        diaLimit = 30;

    }

    else if (mes == 2) {

        if ( bisiesto == 1) {

            diaLimit = 29;
        }

        else {

            diaLimit = 28;

        }

    }

    if ( dia >= 1 && mes <= 12 && dia <= diaLimit){

        printf ("La fecha ingresada es valida \n");
    }
        else {

            printf ("La fecha ingresada no es valida \n");
        }
    
        system ("pause");

    return 0;
}
