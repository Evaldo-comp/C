#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>  //biblioteca para booleanos

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto
//Declarando variáveis
	bool a = true, b =false;

	if(a){
		printf("a é Verdadeiro\n");
	}

//Comparando B
	if (b){
		printf("b é Verdadeiro\n");
	}else
	{
		printf("b é Falso\n");
	}

	//Comparando Falsidade
	if (!b){
		printf("b é Falso\n");
	}
	{
		/* code */
	}
	
}