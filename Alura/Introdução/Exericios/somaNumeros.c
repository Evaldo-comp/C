/*
* Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o 
* resultado de 1+2+3+4+...+100.
*/

#include <stdio.h>

int main() {
  
  int i = 1;
  int soma =0; 
  while(i <= 100){
      soma = soma+i;
      i++;
    }
    printf("%d \n", soma);
  }
