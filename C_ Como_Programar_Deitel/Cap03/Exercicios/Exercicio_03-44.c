/*
* 3.44 Escreva um programa que leia três valores float diferentes de zero, determine e imprima se 
*		eles poderiam representar os lados de um triângulo.
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>
#include<math.h>
int main(){

	float l1, l2, l3;

	printf("Digite o valor dos 3 lados: ");
	scanf("%f%f%f", &l1, &l2, &l3);

	if ((l1 < (l2 + l3)) && (l1 > fabs(l2 - l3))){
		if ((l2 < (l1 + l3)) && (l2 > fabs(l1 - l3))){
			if (l3 < (l1 + l2) && (l3 > fabs(l1 - l2))){
				printf("Os lados inseridos podem formar um triângulo\n");		
			}else printf("Não é possível formar um triangulo com os lados inseridos\n");				 
		}else printf("Não é possível formar um triangulo com os lados inseridos\n");
	}else printf("Não é possível formar um triangulo com os lados inseridos\n"); 		
}
			
	

	





	

	

	
	


