#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float catAd, catOp, calculoHip, valHipotenusa, perimetro, superficie;

    printf("Ingrese la longitud del cateto adyancente del triangulo rectangulo \n");
    scanf("%f", &catAd);

    printf("Ingrese la longitud del cateto opuesto del triangulo rectangulo \n");
    scanf("%f", &catOp);

    calculoHip = catAd * catAd + catOp * catOp;
    valHipotenusa = sqrt (calculoHip);

    printf("La hipotenusa de su triangulo rectangulo es: %f \n", valHipotenusa);

    perimetro = catAd + catOp + valHipotenusa;

    printf ("El perimetro de su triangulo rectangulo es: %f \n", perimetro);

    superficie = (catAd * catOp) / 2;

    printf("La superficie de su triangulo rectangulo es: %f \n", superficie);

    system("pause");
    
    return 0;
}
