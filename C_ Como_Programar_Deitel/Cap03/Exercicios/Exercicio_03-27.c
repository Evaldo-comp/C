/*
* 3.27 Ache os dois maiores números. Usando uma técnica semelhante à do Exercício 3.24,
		ache os dois maiores valores dos 10 números. [Nota: você poderá informar cada número apenas uma vez.]
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int contador = 0, numero, maior1 = 0, maior2 = 0;

	while(contador < 10){
		printf("Digite o  %dº número:   ",contador );
		scanf("%d", &numero);
		contador++;

		if ((maior1 == 0) && (maior2 ==0)){
			maior1 = numero;
			maior2 = numero;
		
		}

		if (maior1<= numero){
			maior2 = maior1;
			maior1 = numero;
		}
		
		
	}
	printf("%d é o Maior e %d é o Segundo maior ", maior1, maior2 );

	

	
}
	
	
	

	

	
	


