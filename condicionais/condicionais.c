#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto

	//Definindo variável

	int n1 = 10, idade = 0;
	int a;


//*************************EXEMPLO-01-CONDICIONAL SIMPLES***************************************
	//condicional simples
	if (n1 == 10)
	{
		printf("A variável é igual a 10\n");
	}

	

//***************************EXEMPLO-02-NUMERO-PAR***********************************************
	//Coletando Dados do usuário
	printf("Insira um número\n");
	scanf("%d", &a);

	if (a %2 == 0)
	{
		printf("O número inserido é PAR\n");
	}
	else
	{
		printf("O número inserido é IMPAR\n");
	}

//****************************EXEMPLO-03-ELSE IF ************************************************
	//O Programa deve retornar algo de acordo com uma determinada entrada
	//1 a 12 - !Você é uma criança
	//13 a 18 - !Você é adolesente
	//19 a 50 - !Você é adulto
	//51 a ... - !Você é idoso
	printf("Digite sua idade\n");
	scanf("%d", &idade);

	if (idade >=1 && idade<=12){
		printf("Você é criança\n");
	}else if (idade >=13 && idade<=18){
		printf("Você é adolesente\n");
	}else if(idade >=19 && idade<=50)
	{
		printf("você é adulto\n");
	}else{
		printf("Você é idoso\n");
	}



}