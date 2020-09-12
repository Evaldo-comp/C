/*
* 3.19 Calculadora de comissão de vendas. Uma grande companhia química paga seus vendedores por comissão.
* Os vendedores recebem R$ 200,00 por semana, mais 9 por cento de suas vendas brutas nessa semana. Por exem-
* plo, um vendedor que comercialize R$ 5.000,00 em produtos químicos em uma semana receberá R$ 200,00 e
* mais 9 por cento de R$ 5.000,00, ou seja, receberá um total de R$ 650,00. Desenvolva um programa que peça os
* valores brutos de cada vendedor na semana que passou, calcule e apresente o valor que esse vendedor deverá rece-
* ber. Processe os valores referentes a um vendedor por vez.
*
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	float venda;

	

	while (1){

        printf("Informe o Total de suas vendas: ( -1 pra sair) ");
		scanf("%f", &venda);

		if (venda == -1) break;

		float acrescimo = 0.09 * venda;

		printf("O pagamento é de R$%.2f\n", acrescimo + 200.00 );
		

	        
    }
}
	
	


