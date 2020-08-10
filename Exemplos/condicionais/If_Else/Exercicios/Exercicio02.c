#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//***************************EXERCÍCIO 02***********************************************

//Receba três valores referentes aos lados de um triângulo e verifique se é equilátero

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Definir variável
	int l1, l2, l3;

	printf("Insira os três lados\n");
	scanf("%d", &l1);
	scanf("%d", &l2);
	scanf("%d", &l3);

	//Conectivo AND
	if((l1 == l2)&&(l1 == l3)){
		printf("Os lados inseridos formam um triângulo equilátero \n");
	}

	
	
}