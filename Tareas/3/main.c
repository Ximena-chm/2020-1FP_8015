#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

	float sum;
	float rest;
	float mult;
	float divi;

	sum = atof(argv[1]) + atof(argv[2]);
	rest = atof(argv[1]) - atof(argv[2]);
	mult = atof(argv[1]) * atof(argv[2]);
	divi = atof(argv[1]) / atof(argv[2]);

	printf("Los resultados de las operaciones son: \n suma: %.2f \n resta: %.2f \n multiplicación: %.2f \n división: %.2f \n", sum, rest, mult, divi);

	return 0;
}