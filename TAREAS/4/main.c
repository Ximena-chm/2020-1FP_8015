#include <stdio.h> 
#include <stdlib.h>
int main (int argc, char *argu[]){

float lista[argc], suma=0;
float promedio;

for (int i=1; i<argc; i++){
	lista[i]=atoi(argu[i]);
}
for (int i=1;i<arcg;i++){
	suma=suma+lista[i];
}
promedio=(float) suma/(argc-1);
printf("El promedio es: %.2f\n", promedio);
return 0;
}