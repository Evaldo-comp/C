/*
* 4.9 (Soma de uma Sequeência de Inteiros)-Escreva um programa que some uma sequência de inteiros. 
* Considere que o primeiro inteiro lido com scanf especifique o número de valores restantes a serem 
*inseridos. Seu programa deve ler apenas um valor toda vez que scanf for executado
*
*   Fonte: C - Como programar - Deitel e Deitel 6º ed
*
	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int n, soma = 0, inteiro ;
	int cont = 1;
	

   printf("Insira os números de inteiros positivos que devem ser somados\n");
   scanf("%d", &n);

   while(cont <= n){
   	printf("Digite o %d º inteiro a ser somado\n", cont);
   	scanf("%d", &inteiro);
   	soma += inteiro;

   	cont++;
   }

   printf("A soma dos %d números inseridos é %d\n", n, soma );



}