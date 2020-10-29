#include <stdio.h>
#include <math.h>
int main()
{
float HIP, COP, CAD, P;
printf ("Introduce hipotenusa: ");
scanf ("%f", &HIP);
printf ("Introduce cateto opuesto: ");
scanf ("%f", &COP);
printf ("Introduce cateto adyacente: ");
scanf ("%f", &CAD);
P= HIP+COP+CAD;
printf("\nEl perimetro del triangulo es: %.2f\n" ,P);
	return 0;
}
