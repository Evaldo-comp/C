#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include<string.h>

//************************************************* TESTE COM PONTO FLUTUANTE ****************************8

	//Muito cuidado na hora de testar números com ponto flutuante, pois eles nunca são exatos, portanto nunca
	//retornarão True, por isso no código abaixo está sendo utilizado (fabs) para retornar o absoluto e esse absoluto é testado
	//entro de um intervalo

void main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto

	float imposto = 0.65;

	if(fabs( imposto == 0.65)<= 0.1)
		printf("Teste");


}