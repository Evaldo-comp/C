#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//***************************EXEMPLO-02-INCLUINDO ELSE ***********************************************
	//O código verifica se um número inserido pelo usuário é par ou impar

void main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto

	//Definindo variável

	int n1 = 10, idade = 0;
	int a;
	
	

	printf("Insira um número\n");
	scanf("%d", &a);

	if (a %2 == 0) //verifica se o número é par
	{
		printf("O número inserido é PAR\n");
	}
	else
	{
		printf("O número inserido é IMPAR\n");
	}
}