/*
* 3.18 Calculadora de limite de crédito. Desenvolva um programa em C que determine se um cliente de uma
* loja de departamentos excedeu seu limite de crédito. Os seguintes fatos estão disponíveis para cada cliente:
*
* a) Número de conta.
* b) Saldo no início do mês.
* c) Total de todos os encargos desse cliente nesse mês.
* d) Total de todos os créditos aplicados à conta desse cliente nesse mês.
* e) Limite de crédito autorizado.
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	float saldo_ini, encargos, creditos, limite_credito;
	int conta;


	while (1){

        printf("Informe o o número da conta, ou -1 pra sair: ");
		scanf("%d", &conta);

		if (conta == -1) break;

		printf("Informe o saldo incial: ");
		scanf("%f", &saldo_ini);

		printf("Informe o total de encargos: ");
		scanf("%f", &encargos);

		printf("Informe o total de créditos: ");
	    scanf("%f", &creditos);

		printf("Informe o limite de créditos: ");
		scanf("%f", &limite_credito);

		float saldo = creditos + saldo_ini;

		printf("Conta: %d\n", conta);
		printf("Limite de Crédito: %.2f\n", limite_credito);
		printf("Saldo: %.2f\n", saldo);

			if (saldo  > limite_credito)
				printf("Limite Ultrapassado");	 
	        }
	        
    }

	
	


