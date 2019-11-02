#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argu[]){
	int resultado; 		//resultado a imprimir
	int argui[argc];	// lista para los valores enteros

	for(int i=1; i<argc; i++){
		resultado=1;
		for(int j=1; jargc; j++){
			argui[j]=atoi(argu[j]);
			resultado=resultado*argui[j];
		}
		resultado=resultado/agui[i];
		printf("%i\n", resultado);
	}//utilizamos dos for para excluir al agu[i]
	return 0;
}