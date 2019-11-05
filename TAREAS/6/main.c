#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argu[]){
	int x;
	int agrui[argc];
	int i;
	int j;

	for (int i=1; i<argc; i++){
		x=1;

		for(int j=1; j<argc;j++){
			argui[j]=atoi(argv[j]);
			x=x*argui[j];
		}
<<<<<<< HEAD
		resultado=resultado/agui[i];
		printf("%i\n", resultado);
	}//utilizamos dos for para poder excluir al agu[i]
=======
		x=x/argui[i];
		printf("%i\n, x");
	}
>>>>>>> 5d07d0e09d1921be39e6d33fa1ed4792cfffda3c
	return 0;
}