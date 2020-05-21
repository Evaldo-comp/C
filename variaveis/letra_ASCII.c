#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Uma letra pode ser impressa na forma de inteiro, dessa forma o resultado será o seu código na tabela ASCII

void  main()
{
	setlocale(LC_ALL, "");
	//OBS: No caso de não estar utilizando o setlocale no local fda virgula deve-se usar o ponto


	// Definir variável
	char letra  = 'A';


    if (letra == 'A'){

	    printf("A letra é x\n");

	printf("codigo da letra é = %d\n", letra); //imprime o codigo da letra

	printf("Insisra uma letra\n");
	scanf("%c", &letra);
	printf("O codifgo da letra inseridaq é %d\n", letra );
	
	}
}	