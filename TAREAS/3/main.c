#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argu[]){

	float sum;
	float rest;
	float mult;
	float divi;
	float num1; 
	float num2;

	num1 = atof(argu[1])
	num2 = atof(argu[2])

	sum = num1 + num2;
	rest = num1 - num2;
	mult = num1 * num2;
	divi = num1 / num2;

	printf("Los resultados de las operaciones son: \n suma: %.2f ", sum);
	printf("resta:%.2f", rest)
	printf("multiplicacion:%.2f", mult)
	printf("division:%.2f", divi)

	return 0;
}