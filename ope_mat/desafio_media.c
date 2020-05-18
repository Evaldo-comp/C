#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Crie um algoritmo que leia 2 notas e mostre a média entre elas.

	float nota1, nota2, media;

	printf("Insira a primeira nota\n");
	scanf("%f", &nota1);

	printf("Insira a segunda nota\n");
	scanf("%f", &nota2);

	media = (nota1 + nota2)/2;

	printf("A média é %f\n", media );
}