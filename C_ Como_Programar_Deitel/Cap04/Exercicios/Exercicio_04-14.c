/*
* 4.14 Fatoriais. 
*    A função fatorial é usada com frequência nos problemas de probabilidade. 
*    O fatorial de um inteiro positivo n (escrito como n! e pronunciado como ‘fatorial
*    de n’) é igual ao produto dos inteiros positivos de 1 a n. Escreva um programa que avalie 
*    os fatoriais dos inteiros de 1 a 5. Imprima os resultados em formato tabular. Que
*    dificuldade poderia impedi-lo de calcular o fatorial de 20?
*
*   Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int prod = 1, soma = 0;

   for(int i = 1; i <=5 ; i++){
      if (i == 1)
        printf("O Fatorial de %d é %d\n", i, i);
      else if (i == 2)
        printf("O Fatorial de %d é %d\n",i,  i*1);
      else if (i == 3)
        printf("O Fatorial de %d é %d\n",i,  i*2);
      else if (i ==4)
        printf("O Fatorial de %d é %d\n",i,  i*6);
      else
      {
          printf("O Fatorial de %d é %d\n",i,  i*24);
      }
       
        

   }




}