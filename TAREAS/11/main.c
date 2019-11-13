#include <stdio.h>
#include <stdlib.h>

//función para raíz
double raiz(double nume, double tolerancia, double resultado){
	double division, diferencia;

	//algoritmo 
	division=nu/resultado;
	diferencia=diferencia>0? diferencia:-diferencia;

	if(diferencia<=tolerancia){
		//caso base
		return resultado;
	}
	else{
		//lo que hace si no es caso base
		resultado=(resultado+división)/2;
		return raiz(num, tolerancia, resultado);
	}
}
//programa
int main (int argc, char *argu[]){

	//variables
	double num, toleracia, resultado;
	num=atof(argu[1]);
	tolerancia=atof(argu[2]);
	resultado=atof(argu[3]);

	//llamado de la función
	resultado=raiz(num, tolerancia, resultado);
	printf("%lf\n", resultado);

	return 0;
}