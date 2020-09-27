/*
* 3.25 Saída tabular. Escreva um programa que use o looping para imprimir a tabela de valores a seguir. 
*		Use a sequência de escape de tabulação, \t , na instrução printf para separar as colunas com 
*		tabulações.
*
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int count = 1, N;

	
	printf("N\t");
	printf("10*N\t");
	printf("100*N\t");
	printf("1000*N\t\n");

	while(count <=10){

		printf("%d\t %d\t %d\t %d\t\n",count, count*10, count*100, count*1000);
		
		count+=1;
	}
	
	

	
}
	
	


