#include <stdio.h>
#include <stdlib.h>

void  main()
{
	/* code */
	int a = 3, b = 5;

	//Realizando soma
	printf("A soma de a + b é: %d\n", a + b );

	//Realizando soma mostrandoas variaveis na saida
	printf("A soma de %d + %d é: %d\n",a, b, a + b );

	//Realizando sunbtraçao
	printf("A subtração de %d - %d é: %d\n",a, b, a - b );

	//Realizando dicvsão
	printf("A Divisão de %d / %d é: %d\n",a, b, a / b );

	//Realizando multiplicação]
	printf("A multiplicação de %d / %d é: %d\n",a, b, a * b );	


	//Realizando o resto da divisão
	printf("O rtesto da divisão de  %d por  %d é: %d\n",a, b, a % b );


	//Realizando Valor absoluto
	printf("O valor absoluto de -3 = :%d\n",abs(-3) );
}