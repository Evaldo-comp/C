/*
*  Faça um programa que leia uma medida dada em polegadas e converta-a para o sistema métrico.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
double pol;


printf("Digite a mendida em poleadas\n");
scanf("%lf", &pol);

double metrico = pol * 25.4;

printf("A medida em metros é %.4f\n ", metrico / 1000);



}
