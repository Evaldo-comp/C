#include <stdio.h>
#include<stdlib.h>


void main (){

	int vetor[5], cont;  //criando um vetor com 6 espaços

	vetor [0] = 1;
	vetor [1] = 2;
	vetor [2] = 3;
	vetor [3] = 4;  //adiciona o valor 1 no indice 0 do vetor

	printf("Posição 0: %d\n", vetor[0] );


	//Imprimindo um vetor com um alço de repetição

	for (cont = 0; cont < 4; cont++)
	{
		printf("Posição %d :  %d\n", cont, vetor[cont] );
	}


	//Preenchendo vetor com valores do usuário
	for (cont = 0; cont < 4; cont++)
	{
		printf("Insira o valor do vetor  %d \n: ", vetor[cont] );
		scanf("%d", &vetor[cont]);
	}




}