/*
*  Faça um programa para calcular e imprimir o salário bruto a ser recebido por um funcionário
*  em um mês. P programa deverá utilizar os seguintes dados:
*    - número de horas p/ mês
*    - valor recebido p/ hora
*    - número de filhos com idade menor que 14
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void salario(int numeroHorasMes, int qtdFilhosMenorQuatorze, double valorPorHora){
    double salario = numeroHorasMes * valorPorHora;
    if (salario <= 1425 ){
        printf ("O seu salário bruto é %.2f\n",salario + (qtdFilhosMenorQuatorze * (48.62)));
    }else{
        printf("Você não está apto a receber o salário família\n");
    }
}

int main(){
   salario(160, 2, 1.78);
}