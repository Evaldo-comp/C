#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



//O EXMEPLO SEGUINTE SIMULA OS VALORES DE UMA TABELA VERDADE AND, COM BASE NOS DADOS INSERIDOS PELO USUÁRIO
int main()
{
	//Incialização das variáveis
	int p,q;

	printf("Vamos Fazer o teste da TABELA VERDADE de E-AND\n" );
	printf("Insira um valor para p, sendo as opções 1 ou 0\n");
	scanf("%d",&p);

	printf("Insira um valor para q, sendo as opções 1 ou 0\n");
	scanf("%d",&q);

	if (p ==1 && q == 1){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else if(p==1 && q == 0){
		printf("O valor verdade é 0, ou seja, Falso\n");
	}else if (p == 0 && q == 1){
		printf("O valor verdade é 0, ou seja, Falso\n");
	}else{
		printf("O valor verdade é 0, ou seja, Falso\n");
	}


//O EXMEPLO SEGUINTE SIMULA OS VALORES DE UMA TABELA VERDADE AND, COM BASE NOS DADOS INSERIDOS PELO USUÁRIO
	printf("Vamos Fazer o teste da TABELA VERDADE de OU-OR\n" );
	printf("Insira um valor para p, sendo as opções 1 ou 0\n");
	scanf("%d",&p);

	printf("Insira um valor para q, sendo as opções 1 ou 0\n");
	scanf("%d",&q);

	if (p ==1 && q == 1){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else if(p==1 && q == 0){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else if (p == 0 && q == 1){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else{
		printf("O valor verdade é 0, ou seja, Falso\n");
	}


	//O EXMEPLO SEGUINTE SIMULA OS VALORES DE UMA TABELA VERDADE DO CONDICIONAL (SE..ENTÃO), COM BASE NOS DADOS INSERIDOS PELO USUÁRIO
	printf("Vamos Fazer o teste da TABELA VERDADE do CONDICIONAL (se ... então)\n" );
	printf("Insira um valor para p, sendo as opções 1 ou 0\n");
	scanf("%d",&p);

	printf("Insira um valor para q, sendo as opções 1 ou 0\n");
	scanf("%d",&q);

	if (p ==1 && q == 1){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else if(p==1 && q == 0){
		printf("O valor verdade é 0, ou seja, Falso\n");
	}else if (p == 0 && q == 1){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else{
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}


	//O EXMEPLO SEGUINTE SIMULA OS VALORES DE UMA TABELA VERDADE DO BICONDICIONAL (SE E SOMENTE SE) COM BASE NOS DADOS INSERIDOS PELO USUÁRIO
	printf("Vamos Fazer o teste da TABELA VERDADE do BICONDICIONAL (se e somente se)\n" );
	printf("Insira um valor para p, sendo as opções 1 ou 0\n");
	scanf("%d",&p);

	printf("Insira um valor para q, sendo as opções 1 ou 0\n");
	scanf("%d",&q);

	if (p ==1 && q == 1){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else if(p==1 && q == 0){
		printf("O valor verdade é 0, ou seja, Falso\n");
	}else if (p == 0 && q == 1){
		printf("O valor verdade é 0, ou seja, Falso\n");
	}else{
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}


	//O EXMEPLO SEGUINTE SIMULA OS VALORES DE UMA TABELA VERDADE DO OU EXCLUSIVO (OU...OU) COM BASE NOS DADOS INSERIDOS PELO USUÁRIO
	printf("Vamos Fazer o teste da TABELA VERDADE do BICONDICIONAL (se e somente se)\n" );
	printf("Insira um valor para p, sendo as opções 1 ou 0\n");
	scanf("%d",&p);

	printf("Insira um valor para q, sendo as opções 1 ou 0\n");
	scanf("%d",&q);

	if (p ==1 && q == 1){
		printf("O valor verdade é 0, ou seja, Falson");
	}else if(p==1 && q == 0){
		printf("O valor verdade é 1, ou seja, Verdadeiro\n");
	}else if (p == 0 && q == 1){
		printf("O valor verdade é 1, ou seja,Verdadeiro\n");
	}else{
		printf("O valor verdade é 0, ou seja, Falso\n");
	}



}