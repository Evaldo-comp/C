/*
 Escreva um programa que lê três inteiros e determine e imprima o menor e o maior do grupo.

*/


#include<stdio.h>

int main(){
	int n1;

	printf("Insira um número \n");
	scanf("%d", &n1);

	// Definção do maior número

	if (n1 % 2 == 0){
		printf("%d É par \n", n1 );
	}else{
		printf("%d é Ímpar\n",  n1);
	}
	
}

	


	


