/*
2.18 (Comparando Valores) Escreva um programa que peça o usuário para inserir o valor 
da maior precipitação chuvosa  em sua cidade , o valor da precipitação do ano atual. 
Cheque se a precipitação atual excede a máxima e imprima a mensagem adequada. 
Se a precipitação atual exceder a máxima, associe a atual ao valor máximo existente.
*/


#include<stdio.h>

int main(){
	int precMax, preAtual;

	printf("Insira a preciptação Máxima na sua cidade: \n");
	scanf("%d", &precMax);


	printf("Insira a preciptação do ano corrente na sua cidade: \n");
	scanf("%d", &preAtual);

	if (preAtual > precMax){
		printf("A preciptação atual é %dmm maior que a Máxima %dmm\n", preAtual, precMax);
		printf("Preciptação Máxima antes %d mm\n", precMax );
		printf("Preciptação Máxima agora %d mm\n", preAtual );
	}else{
		printf("A preciptação atual é %dmm, ou seja menor  que a Máxima %dmm\n", preAtual, precMax);
	}


}