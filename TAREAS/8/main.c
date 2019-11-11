#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	double a;
	double b;
	double x;
	double y;

	x=atof(argv[1]);
	y=atof(argv[2]);

	if (x==0){
		//cambio a fahrenheit
		a=(1.8*y)+32;
		printf("%.2lf\n", a);
	}
	if (x==1){
		//cambio a centigrados
		b=(y-32)/1.8;
		printf("%.2lf\n", b);
	}
	return 0;
}