/*
* 4.12 Calculando a soma de inteiros pares. Escreva um programa que calcule e imprima a soma dos 
*      inteiros pares de 2 a 30.
*
*   Fonte: C - Como programar - Deitel e Deitel 6º ed
*
	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int num, soma = 0;

   for(int i = 2; i <=30 ; i+=2){
      
         soma += i;
         
   }

   printf("A soma dos números inteiros pares de 2 a 30 é %d\n", soma);

}