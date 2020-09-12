/*
* Os motoristas se preocupam com o consumo de combustível de seus automóveis.
* Um motorista manteve um registro do número de abas- tecimentos que fez, registrando também o 
* número de quilômetros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa 
* que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. 
* O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados.
* Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado 
* de quilômetros por litro para todos os abastecimentos.

	Fonte: C - Como programar - Deitel e Deitel 6º ed

	Resolução: Evaldo 2020
*/

#include<stdio.h>

int main(){

	float km = 0, combustivel, totalkm, totalcombistivel;


	while (combustivel != -1){
		
		   printf("quantos litros abasteceu?\n");
		   scanf("%f", &combustivel);

		   if (combustivel == -1){
		   	break;
		   }
		   else
		   {
		      

		       totalcombistivel += combustivel;

		       printf("Informe quantos quilômentros dirigiu\n");
		       scanf("%f", &km);

		       totalkm += km;

		       printf("O consumo atual foi de %.6f\n", km/combustivel );
	        }
    }

	printf("O consumo total foi de %2.6f\n", totalkm/totalcombistivel );
	


}