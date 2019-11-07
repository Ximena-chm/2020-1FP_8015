#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argu[]){
	foat a;
	float b;
	float x;
	float y;

	x=atof(argv[1]);
	y=atof(argv[2]);

	if (x==0){
		a=(1.8*y)+32;
		printf("%.2f\n", a);
	}
	if (x==1){
		b=(y-32)/1.8;
		printf("%.2f\n", b);
	}
	return 0;
}