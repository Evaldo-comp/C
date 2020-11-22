/*
  (Múltiplos): Escreva um programa que leia dois inteiros e determine se o primeiro é múltiplo do segundo.

*/


#include<stdio.h>

int main(){
	int n1, n2;

	printf("Insira dois número\n");
	scanf("%d%d", &n1, &n2);

	if (n1 % n2 == 0){
		printf("o primeiro é múltiplo do segundo\n");

	}else{
		printf("o primeiro NÂO é múltiplo do segundo\n");		
	}

	
}

	


	


