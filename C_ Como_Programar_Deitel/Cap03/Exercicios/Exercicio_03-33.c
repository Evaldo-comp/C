/*
* 3.33 Quadrado de asteriscos. Escreva um programa que leia o lado de um quadrado e depois exiba 
		esse quadrado a partir de asteriscos. Seu programa deverá funcionar para quadrados de todos
		os tamanhos de lado entre 1 e 20. Por exemplo, se o programa ler um tamanho 4, ele deverá exibir.
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>
int main(){

int j,i,x,y;

printf("Altura\n");
scanf("%d", &y);

printf("Largura\n");
scanf("%d", &x);

//scanf's
for(j=0; j< y; j++){
  for(i=0; i<x; i++){
    printf("*");
  }
  printf("\n");
}
}
	

	

	
	


