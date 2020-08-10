#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Crie um algoritmo que leia três numeros de uma só vez
	//Coloque o valor da multiplicação entre os trÊs em uma variavel
	//Exiba a variavel

	int v1, v2, v3, mul;

	printf("Insira três valores\n");
	scanf("%d%d%d", &v1, &v2, &v3);

	mul = v1*v2*v3;

	printf("A multiplicação dos vaores inseridos é %d\n", mul);
}