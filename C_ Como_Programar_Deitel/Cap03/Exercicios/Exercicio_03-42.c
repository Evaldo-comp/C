/*
* 3.41 Diâmetro, circunferência e área de um círculo. Escreva um programa que leia o raio de um círculo
*	(como um valor float ) e calcule e imprima o diâmetro, a circunferência e a área. Use o valor 3.14159 para p.
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>
int main(){

	float raio;

	printf("Digite o valor do raio");
	scanf("%f", &raio);

	printf("O diâmentro do círculo é %.2f\n", raio * 2 );
	printf("A circunferência do círculo é %.2f\n", (2 * 3.14) * raio );
	printf("A Área do círculo é %.2f\n", 3.14 * (raio * raio) );
	

}
	

	

	
	


