#include <stdio.h>

// Nesse programa, vemos como preencher uma matriz vazia utilizando laço for


void main(){
	int x[100];
	int t;

	for (t = 0; t < 100; t++){
		x[t]=t;
		printf("%d\n",x[t] );
	}

	
}