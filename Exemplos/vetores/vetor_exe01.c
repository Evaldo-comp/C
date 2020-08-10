#include <stdio.h>
#include<stdlib.h>
#include<locale.h>


void main (){

	setlocale(LC_ALL, "");

	

	printf("Qual sera o tamanho do vetor?\n");
	scanf("%d", &tam);

	float vetor[3], media;  //na declaração o que vai dentro do vetor a quantidade de posições que esse contém
	int cont;  


	for (cont = 0; cont<=2; cont++){
		printf("Insira a nota %d\n", cont + 1);
		scanf("%f", &vetor[cont]);
	}

	media = ((vetor[0] + vetor[1] + vetor[2]) / 3);

	printf("A média é :%.2f\n", (vetor[0] + vetor[1] + vetor[2]) / 3);

}