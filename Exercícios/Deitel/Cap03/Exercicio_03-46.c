/*
* 3.46 
		a) Escreva um programa que leia um inteiro não negativo e calcule e imprima seu fatorial.
		
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>
#include<math.h>
int main(){

	int n, fat=1;

	printf("Digite um número: ");
	scanf("%d", &n);

	int cont = n; 
	while(cont >= 1){
		fat = fat * cont;
		cont--;
	}

	printf("O Fatorial de %d é %d", n, fat);

}			
	

	





	

	

	
	


