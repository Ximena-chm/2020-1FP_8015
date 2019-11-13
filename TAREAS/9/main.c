#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argu[]){
	int numero;

	//debemos saber cuántos caracteres tiene
	numero=strlen(argu[1]);

	//lista de caracteres crea lista
	char arguc[numero];
	int resultado=0;
	//nueva lista para guardar los numeros
	int digitos[numero];

	//Suma de caracteres
	for(int i=0; i<numero; i++){
		arguc[i]=argu[1][i];//guardar en la lista de caracteres
		digitos[i]=atoi(&arguc[i]);//guarda en la lista de numeros
		//suma de dígitos por separado
		resultado=resultado+digitos[i];
	}	
	printf("%i\n", resultado);
	return 0;
}