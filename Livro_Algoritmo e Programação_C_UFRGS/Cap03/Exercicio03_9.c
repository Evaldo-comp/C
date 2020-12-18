/*
*  Dado o preço de um produto em reais, converta esse valor para o equivalente em dólares
*  e em euros. O programa deverá ler o preço em reais e as taxas de conversão para dólar
*  e para o euro 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double converteDolar(double qtdReal, double taxaDolar){
    return qtdReal * taxaDolar;
}

double converteEuro(double qtdReal, double taxaEuro){
    return qtdReal * taxaEuro;
}


int main(){
    printf("%.2f\n",converteDolar(5.00, 0.20));
    printf("%.2f\n",converteEuro(5.00, 0.16));
}