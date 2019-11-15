#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argu[]){
//realizamos la lista y lo que serán los índices
	int numeros[argc-1];
	int i=0;
	int x=1;
	int dato;
	int numero;

//llenamos la lista
	while(i<argc-1){
		numero=atoi(argu[x]);
		numeros[i]=numero;
		i++;
		x++;
	}

//para ordenarlos
	for(i=1;i<argc-1;i++){
		for(x=0; x<argc-1-i; x++){
		//con el siguiente código, se reordenarán los datos
			if(numeros[x]>numeros[x+1]){
			dato=numeros[x];
			numeros[x]=numeros[x+1];
			numeros[x+1]=dato;
			}
		}
	}
	for(int i=0; i<argc-1; i++){
		printf("%i\n", numeros[i]);
	}
}