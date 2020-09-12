/*
* 3.21 Calculadora de salário. Desenvolva um programa que determine o salário semanal bruto de vários
* funcionários. A empresa paga ‘uma hora normal’ para cada funcionário pelas primeiras 40 horas trabalhadas,
* ‘uma hora normal e meia’ por hora trabalhada a partir de 40 horas. Você recebe uma lista de funcionários 
* da empresa, o número de horas que cada funcionário trabalhou na semana anterior e o valor ganho por hora 
* de cada funcionário. Seu programa deverá ler essas informações para cada funcionário e determinar e exibir
* o salário que cada um deverá receber.
*
*
*	Fonte: C - Como programar - Deitel e Deitel 6º ed
*
*	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	float salario_hora, salario, juros;
	int horas_trabalhadas;

	

	while (1){

        printf("Informe a quantidade horas trabalhadas na semana anterior: ( -1 pra sair) ");
		scanf("%d", &horas_trabalhadas);

		if (horas_trabalhadas == -1) break;

		printf("Informe o valor do seu salário-hora: ");
		scanf("%f", &salario_hora);

		if (horas_trabalhadas > 40){
			salario = (((salario_hora  + salario_hora/2) * (horas_trabalhadas - 40)) + salario_hora * 40);
			printf("salário é de R$%.2f\n", salario );
		}else{
			printf("Salário é R$%.2f\n", salario_hora*40 );
		}
    }
}
	
	


