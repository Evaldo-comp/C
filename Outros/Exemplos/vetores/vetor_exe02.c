#include <stdio.h>
#include<stdlib.h>
#include<locale.h>


void main (){

	setlocale(LC_ALL, "");

	

	//Criando um vetor com a quantidade de indices escolhida pelo usuário
	int tam;



	printf("Qual sera o tamanho do vetor?\n");
	scanf("%d", &tam);

	 float vetor[tam], media;  //na declaração o que vai dentro do vetor a quantidade de posições que esse contém
	int cont, soma; 


	for (cont = 0; cont<=tam; cont++){
		printf("Insira a nota %d\n", cont + 1);
		scanf("%f", &vetor[cont]);
		soma = soma+ vetor[cont];
	}

	media = (soma / tam);

	printf("A média é :%.2f\n", media);

}