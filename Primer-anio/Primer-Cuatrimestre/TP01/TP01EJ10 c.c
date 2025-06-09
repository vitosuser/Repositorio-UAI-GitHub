#include <stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
 {
	int cantidadVendida, valorVehiculo, sueldo;
	
	
	printf("Calulculo Sueldo Vendedor de vehciulos \n");
	
	printf("Ingrese el valor del vehiculo \n");
	scanf("%d",&valorVehiculo);
	
	printf("Ingrese la cantidad de vehiculos vendido por el trabajador \n");
	scanf("%d",&cantidadVendida);
	
	sueldo = 500 + 0.1 * valorVehiculo * cantidadVendida + 50 * cantidadVendida;
	
	printf("El sueldo del trabajador es: %d \n", sueldo);
	
	system("pause");
	return 0;
}

