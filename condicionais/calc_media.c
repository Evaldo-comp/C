#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Uma letra pode ser impressa na forma de inteiro, dessa forma o resultado será o seu código na tabela ASCII

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Definir variável
	float n1, n2, n3, media ;

	printf("Insira suas três notas\n");
	printf("Nota 01\n");
	scanf("%f", &n1);

	printf("Nota 02\n");
	scanf("%f", &n2);

	printf("Nota 03\n");
	scanf("%f", &n3);

	media = (n1 + n2 + n3) / 3;

	if (media >= 7){
		printf("Sua media foi: %f\n", media );
		printf("Parabéns, você foi aprovado\n");
	}else{
		printf("Sua media foi: %f\n", media );
		printf("Infelismente voê foi reprovado\n");
	}

	
}	