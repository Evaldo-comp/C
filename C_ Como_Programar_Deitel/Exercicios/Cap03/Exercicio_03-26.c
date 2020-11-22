/*
* 3.26 Saída tabular. Escreva um programa que use o looping para produzir a seguinte tabela de valores:
* A    A+2    A+4     A+6    
* 3     5      7       9 
* 6     8      10       12
* 9     11     13       15
* 12    14     16       18
* 15    17     19        21
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int count = 1, A = 3;

	
	printf("A\t");
	printf("A + 2\t");
	printf("A + 4\t");
	printf("A + 6\t\n");

	while(count <=5){
        
		printf("%d\t %d\t %d\t %d\t\n",A, A + 2, A + 4, A + 6);
		
		count+=1;
		A +=3;
	}
	
	

	
}
	
	


