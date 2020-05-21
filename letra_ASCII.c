#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Definir variável
	char letra  = 'A'

	printf("Insira uma letra qualquer\n");
	scanf("%s", &letra);

	printf("O código ASCII da letra inserida é : %d\n", letra );

	