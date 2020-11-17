/*
* 4.13 Calculando o produto de inteiros ímpares. 
*    Escreva um programa que calcule e imprima o produto dos inteiros ímpares de 1 a 15.
*
*   Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int prod = 1, soma = 0;

   for(int i = 1; i <=15 ; i+=2){
      prod = prod *i;
      printf("%d\n", i);
         
   }


   printf("O produto dos números inteiros ímpares de 1 a 15 é %d\n", prod);

}