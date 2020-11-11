#include <stdio.h>
#include <stdlib.h>
int main()
{
	int opcion;
	float n1, n2, res;
	
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion: \n");
	printf("\t 4.- Division: \n");
	printf("\t 5.- Potencia: \n");
	printf("\t 6.- Raiz cuadrada");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	
	if (opcion==6){
		printf ("Dame el numero: ");
		scanf ("%f", &n1);
	} else if (opcion >=7){ 
	printf ("\n usted ha salido");}
	else {
	printf ("dame el primer numero: ");
	scanf ("%f", &n1);
	printf ("dame el segundo numero: ");
	scanf ("%f", &n2);
	
	}
	switch(opcion) 
	{
	case 1: 
		res= n1 + n2 ;
		printf ("\n El resultado es %.2f", res);
		break;
	case 2: 
		res= n1 - n2;
		printf("\n El resultado es: %.2f", res);
		break;
	case 3: 
		res= n1 * n2;
		printf ("\n El resultado es: %.2f", res);
		break;
	case 4:
		res= n1 / n2;
		printf ("\n El resultado es: %.2f", res);
		break;
	case 5:
		res= pow(n1, n2);
		printf ("\n El resultado es: %.2f", res);
		break;
	case 6: 
		res= sqrt (n1);
		printf ("\n El resultado es: %.4f", res);
	default:
		printf("\n ");
		exit(0);
	}
} 
