#include<stdio.h> // Input Output
#include<math.h>

#define PI 3.1416 // Estamos definiendo una constante

int main(){
	float area, radio; //Estamos declarando variables de tipo flotante
	radio = 5; // Asignamos valor a variable radio
	area = PI * pow(5,2); // Asignamos resultado de la operaci�n
	printf("Area\n"); // Imprimiendo t�tulo
	// Imprimiendo resultado
	printf("Area de Circulo con radio 5: %f", area);
	return 0;
}

