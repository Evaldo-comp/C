#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




//****************************EXEMPLO-03-ELSE IF Aninhados ************************************************
	
	//O Programa deve retornar a situação do usuário de acorod com a idade inserida
	//1 a 12 - !Você é uma criança
	//13 a 18 - !Você é adolesente
	//19 a 50 - !Você é adulto
	//51 a ... - !Você é idoso 
void main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto

	//Definindo variável

	int n1 = 10, idade = 0;
	int a;
	
	

	printf("Digite sua idade\n");
	scanf("%d", &idade);

	if (idade >=1 && idade<=12){
		printf("Você é criança\n");
		}else if (idade >=13 && idade<=18){
			printf("Você é adolesente\n");
		}else if(idade >=19 && idade<=50)
		{
			printf("Você é adulto\n");
		}else{
		printf("Você é idoso\n");
		}
}
