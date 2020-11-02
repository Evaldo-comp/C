/*
* 4.11 Ache o menor. Escreva um programa que encontre o menor de vários inteiros. 
*     Considere que o primeiro valor lido especifique o número de valores restantes.
*
*   Fonte: C - Como programar - Deitel e Deitel 6º ed
*
	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	
	int num, dado , menor;
	
   printf("Digite o primeiro número\n");
   scanf("%d", &num);

   for(int i = 0; i < num ; i++){
      printf("Digite o %d número\n", i+1 );
      scanf("%d", &dado);


      if ((dado > 0) && (dado <= menor)) {
         menor = dado;
      }
   }

   printf("O menor número é %d\n", menor );

}