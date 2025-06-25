#include <stdio.h>
#include <stdlib.h>
#define T 10

void ingresoDatos(float sueldo [T], int edad [T]);
void sueldoPromedio (float sueldo [T]);
void sPromedio23y40(int edad [T], float sueldo[T]);
int edadPromedio(int edad [T]);
void cantidadEmpleados1(int edad [T], float sueldo [T]);
void cantidadEmpleados2 (int edad [T], int promedioEdad);


int main() {

    float sueldo[T];
    int edad [T];
    int promedioEdad;

    ingresoDatos (sueldo, edad);
    sueldoPromedio (sueldo);
    sPromedio23y40(edad, sueldo);
    promedioEdad = edadPromedio (edad);
    cantidadEmpleados1(edad, sueldo);
    cantidadEmpleados2(edad, promedioEdad);


    system ("pause");
    return 0;
}

void ingresoDatos(float sueldo [T], int edad [T]){

    int i;

    for (i = 0; i < T; i ++){

        printf ("Ingrese el sueldo del empleado %d: \n", i + 1);
        scanf ("%f", &sueldo[i] );

        printf ("Ahora ingrese la edad del empleado %d: \n", i + 1);
        scanf ("%d", &edad [i]);
    }

}

void sueldoPromedio (float sueldo [T]){

    int i; 
    float promedio = 0;
    int sumaSueldos = 0;

    printf ("-------------------SUELDO PROMEDIO------------------- \n\n");

    for (i = 0; i < T; i ++) {

       sumaSueldos = sumaSueldos + sueldo [i];

    }

    promedio = sumaSueldos / T;

    printf ("El sueldo promedio de los empleados es: %2.f \n\n", promedio);


}

int edadPromedio(int edad [T]) {

    int i, sumaEdades = 0, promedio = 0;

    printf ("-------------------EDAD PROMEDIO------------------- \n\n");

    for (i = 0; i < T; i++) {

        sumaEdades = sumaEdades + edad [i];

    }

    promedio = sumaEdades / T;

    printf ("La edad promedio de los empleados es: %d \n\n", promedio);

    return promedio;
}


void cantidadEmpleados1(int edad [T], float sueldo [T]) {

    int i;
    int contador = 0;

    printf ("-------------------EMPLEADOS MAYORES A 30 ANIOS QUE COBRAN MENOS DE $1.000------------------- \n\n");


    for (i = 0; i < T; i ++) {

        if (edad [i] > 30 && sueldo [i] < 1000){

        contador = contador + 1;
        
        }

    }

    printf ("La cantidad de empleados mayores a 30 anios que cobran menos de $1.000 es: %d \n\n", contador);

}


void cantidadEmpleados2 (int edad [T], int promedioEdad) {

    int i, contador = 0;

    printf ("-------------------EMPLEADOS MENORES A LA EDAD PROMEDIO------------------- \n\n");


    for (i = 0; i < T; i ++) {

        if (edad [i] < promedioEdad) {

            contador = contador + 1;

        }

    }


    printf ("Cantidad de empleados menores la edad promedio: %d \n\n", contador);

}

void sPromedio23y40(int edad [T], float sueldo[T]) {

    int i, contador = 0;
    float sumaSueldos = 0, promedioSueldos = 0;

    printf ("-------------------PROMEDIO SUELDOS DE EMPLEADOS ENTRE 23 Y 40 ANIOS------------------- \n\n");


    for (i = 0; i < T; i ++) {

        if (edad[i] >= 23 && edad[i] <= 40) {

            sumaSueldos = sumaSueldos + sueldo [i];
            contador = contador + 1;

        }
    }

    promedioSueldos = sumaSueldos / contador;

        printf ("El sueldo promedio de los empleados entre 23 y 40 anios es: %2.f \n\n", promedioSueldos);

}
