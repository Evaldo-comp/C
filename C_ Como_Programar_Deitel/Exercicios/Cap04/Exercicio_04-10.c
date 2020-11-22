/*
* 4.10 Média de uma sequência de inteiros. Escreva um programa que calcule e imprima a média de 
*   vários inteiros. Considere que o último valor lido com scanf seja a sentinela 9999.
*
*   Fonte: C - Como programar - Deitel e Deitel 6º ed
*
	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int qtd = 0, num, soma = 0 ;
	

   

   while(num != 9999 ){
   	printf("Digite um número qualquer ou 9999 para sair\n" );
   	scanf("%d", &num);

      qtd++;
      if (num != 9999) // impede que o sentinela entre da soma dos digitos válidos
   	  soma += num;

   	
   }

   printf("A a média é: %.2f\n", (double)soma/qtd );



}