/*
*  Faça um programa que que transforme o valor correspondente a um intervalo temporal, expresso
*  em horas, minutos e segundos, no valor correspondente em segundos
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
double horas, min, segundos;

printf("digite o tempo atual detalhadamente em Horas, minutos e segundos\n");
printf("Horas");
scanf("%lf", &horas);

printf("Minutos");
scanf("%lf", &min);

printf("Segundos");
scanf("%lf", &segundos);

double tempoEmSegundos = (((horas * 60) + min) * 60) + segundos; 


printf("O intervalo de tempo inserido é equivalente a %.2f Segundos\n ", tempoEmSegundos);



}
