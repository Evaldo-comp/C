/*
* 3.46 Lados de um triângulo retângulo. Escreva um programa que leia três inteiros diferentes de zero e 
*		determine e imprima se eles poderiam ser os lados de um triângulo retângulo.
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>
#include<math.h>
int main(){

	float h, c1, c2;

	printf("Digite o valor dos 3 lados: ");
	scanf("%f%f%f", &h, &c1, &c2);

	if ((h * h) == (c1 * c1) + (c2 * c2)){
			printf("Os lados inseridos podem formar um triângulo Retângulo\n");		

	}else printf("Não é possível formar um triangulo com os lados inseridos\n"); 		

}			
	

	





	

	

	
	


