/*
* 3.20 Calculadora de juros. Os juros simples sobre um empréstimo são calculados a partir da fórmula
*                      juros = principal * taxa * dias / 365;
* Essa fórmula considera que taxa seja a taxa de juros anual e, portanto, inclui a divisão por 365 (dias). 
* Desenvolva um programa que aceite principal , taxa e dias para vários empréstimos, calcule e apresente 
* os juros simples para cada empréstimo, usando a fórmula apresentada. 
*
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	float principal, taxa, juros;
	int dias;

	

	while (1){

        printf("Informe o valor principal do empréstimo: ( -1 pra sair) ");
		scanf("%f", &principal);

		if (principal == -1) break;


        printf("Informe a taxa de juros: ");
		scanf("%f", &taxa);


        printf("Informe o prazo do empréstimo em dias: ");
		scanf("%d", &dias);

		juros = principal * taxa * dias /365;

		printf("O valor dos juros é de R$%.2f\n", juros );

    }
}
	
	


