#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//al tener posibles números imaginarios, se hacen funciones pará los resultados reales, los imaginarios
//y si existe sólo una solución 

//única solución
void solucionR(double a, double b){
	double xs;
	xs=-b/(2*a);
	printf("%lf\n", xs);
}

//función para Reales
void raicesReales(double a, double b, double c, double determinante){
	double x1;
	double x2;
	double parte; 

	parte=sqrt(determinante);
	x1=(-b/2*a)+(parte/2*a);
	x2=(-b/2*a)-(parte/2*a);
	printf("%lf\n", x1);
	printf("%lf\n", x2);
}

//función para Imaginarios
void raicesImaginarias(double a, double b, double c, double determinante){
	double parte;
	//se necesitan dos variables para cada resultado
	double x1a;
	double x1b;
	double x2a;
	double x2b;

	parte=sqrt(-determinante);

	x1a=-b/(2*a);
	x1b=parte/(2*a);
	x2a=-b/(2*a);
	x2b=parte/(2*a);

	if(b==0){
		x1a=0;
		x2a=x1a;
	}
	printf("%lf+%lfi\n", x1a, x1b);
	printf("%lf+%lfi\n", x2a, x2b);
}


//Programa principal
int main(int argc, char* argu[]){
	double a;
	double b;
	double c;
	double determinante;

	a=atof(argu[1]);
	b=atof(argu[2]);
	c=atof(argu[3]);

//sacamos el determinante para saber a cuál función llamaremos
	determinante=pow(b,2);
	determinante=determinante-(4*a*c);

	if(determinante==0){
		//lamamos a la función para una solución
		solucionR(a,b);
	}
	else{
		if(determinante>0){
			//función para los reales
			raicesReales(a,b,c,determinante);
		}
		else{
			//función para los imaginarios
			raicesImaginarias(a,b,c,determinante);
		}
	}
	return 0;
}