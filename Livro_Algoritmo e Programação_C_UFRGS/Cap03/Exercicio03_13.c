/*
* Construa um programa que receba o valor (em Reais), das compras de cinco cliente
* O Programa deverá informar o valor médio ddas compras
*/

#include<stdio.h>
float valor = 0, soma =0;
int cliente = 1;
int main(){
    while(cliente <6){
      
        printf("Cliente %d, Infome o valor da compra :\n", cliente);
        scanf("%f", &valor);
        soma += valor;
        cliente ++;
    }

    printf("A média geral do valor de compras é: R$ %.2f Reais\n", soma/5);
}