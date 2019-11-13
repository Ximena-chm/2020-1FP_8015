#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//función para saber cuántos saludos se darán
int saludos(int n){
	int result;

	if(n==2){
		//caso base
		result=1;
	}
	else{
		//procedimiento que seguirá si no es el caso base
		result=(n-1)+saludos(n-1);
	}
	return result;
}

int main (int argc, char*argu[]){
	int result, personas;
	personas=atoi(argu[1]);
	// se llama a la función
	result=saludos(personas);
	printf("%i\n", result);
	return 0;
}