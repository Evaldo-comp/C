/*
* Faça um programa que leia uma temperatura fornecida em graus Fahrenheit e a converta para
  o seu equivalente em graus Celcius.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
double temperaturaF, temperaturaC = 0.0;


printf("Digite a temperatura a ser convertida\n");
scanf("%lf", &temperaturaF);

temperaturaC = (temperaturaF - 32) * (5/9);

printf("A temperatura em Celcius é %.f:\n ", temperaturaC);



}
