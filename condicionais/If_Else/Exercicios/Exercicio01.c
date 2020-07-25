#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//***************************EEXERCÍCIO 01***********************************************

// Recebe três notas do usuário e retone a média, indicando se o aluno foi aprovado caso a média seja maior 
//ou igual a 7 


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
		printf("Infelismente você foi reprovado\n");
	}

	
}	