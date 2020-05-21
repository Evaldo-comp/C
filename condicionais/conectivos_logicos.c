#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Uma letra pode ser impressa na forma de inteiro, dessa forma o resultado será o seu código na tabela ASCII

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Definir variável
	int numero = 10;

	//Conectivo AND
	if(numero > 8 && numero < 15){
		printf("O numero está entre 8 e 15 \n");
	}

	//Conectivo OU
	if(numero > 5 || numero > 15){
		printf("O numero é maior que 5 ou maior que 15\n");
	}

	//Misturando conectivosd
	if((numero > 5 && numero < 7) || numero > 12 ){
		printf("O numero esta entre 5 e 7 ou é maior que 12\n");
	}

	
}	