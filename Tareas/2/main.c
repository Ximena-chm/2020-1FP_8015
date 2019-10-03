#include <stdio.h>
#include <stdlib.h>
int main (int argc, chat *argu[]){
	int numero;
	numero=atoi(argu[1]);
	if (numero%2==0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}