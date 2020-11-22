/*
* 3.41 Múltiplos de 2 com um loop infinito. Escreva um programa que continue imprimindo os 
*		múltiplos do inteiro 2, a saber 2, 4, 8, 16, 32, 64 e assim por diante. Seu loop não
*		deverá terminar (ou seja, você deverá criar um loop infinito). O que acontece quando 
*		você executa esse programa?
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>
int main(){

int i = 2;
	while (i % 2 ==0){
		printf("%d\n", i * 2 );
		i+=2;
	}

}
	

	

	
	


