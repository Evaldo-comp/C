#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Crie um algoritmo que leia 2 notas e mostre o valor absoluto da difença entre elas

	int nota1, nota2, dif, va;

	printf("Insira a primeira nota\n");
	scanf("%d", &nota1);

	printf("Insira a segunda nota\n");
	scanf("%d", &nota2);

	dif = (nota1 - nota2);
	va = abs(dif);

	printf("O valor absoluto da difenrença é %d\n", va );
}